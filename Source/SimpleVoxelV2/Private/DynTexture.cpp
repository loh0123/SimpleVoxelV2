// Fill out your copyright notice in the Description page of Project Settings.

#include "DynTexture.h"

UDynTexture::UDynTexture()
{
}

UDynTexture::~UDynTexture()
{
}


void UDynTexture::InitializeCanvas(const int32 pixelsH, const int32 pixelsV)
{
	//dynamic texture initialization
	canvasWidth = pixelsH;
	canvasHeight = pixelsV;

	RenderTexture = UTexture2D::CreateTransient(canvasWidth, canvasHeight);
#if WITH_EDITORONLY_DATA
	RenderTexture->MipGenSettings = TextureMipGenSettings::TMGS_NoMipmaps;
#endif
	RenderTexture->CompressionSettings = TextureCompressionSettings::TC_VectorDisplacementmap;
	RenderTexture->SRGB = 0;
	RenderTexture->AddToRoot();
	RenderTexture->Filter = TextureFilter::TF_Nearest;
	RenderTexture->UpdateResource();

	echoUpdateTextureRegion = TUniquePtr<FUpdateTextureRegion2D>(new FUpdateTextureRegion2D(0, 0, 0, 0, canvasWidth, canvasHeight));


	// buffers initialization
	bytesPerPixel = 4; // r g b a
	bufferPitch = canvasWidth * bytesPerPixel;
	bufferSize = canvasWidth * canvasHeight * bytesPerPixel;
	CPUData.Init(0, bufferSize);

	ClearCanvas(true);

	UpdateCanvas();

	return;
}


void UDynTexture::ClearCanvas(bool IsBlack)
{
	for (int32 X = 0; X < (int32)canvasWidth; X++)
	{
		for (int32 Y= 0; Y < (int32)canvasHeight; Y++)
		{
			if (IsBlack)
			{
				setPixelColor(FIntPoint(X, Y), FColor(0));
			}
			else
			{
				setPixelColor(FIntPoint(X, Y), FColor(255));
			}
		}
	}

	return;
}

void UDynTexture::UpdateCanvas()
{
	if (echoUpdateTextureRegion)
	{
#if WITH_EDITOR
		RenderTexture->TemporarilyDisableStreaming();
#else
		RenderTexture->CancelPendingTextureStreaming();
#endif // WITH_EDITOR

		TUniquePtr<uint8[]> canvasPixelData = TUniquePtr<uint8[]>(new uint8[bufferSize]);

		for (int32 i = 0; i < CPUData.Num(); i++)
		{
			*(canvasPixelData.Get() + i) = CPUData[i];
		}

		RenderTexture->UpdateTextureRegions((int32)0, (uint32)1, echoUpdateTextureRegion.Get(), bufferPitch, bytesPerPixel, canvasPixelData.Get());
		FlushRenderingCommands();
	}

	return;
}

//void UDynTexture::setPixelColor(FIntPoint Pos, uint8 red, uint8 green, uint8 blue, uint8 alpha)
//{
//	if (Pos.X >= (int32)canvasWidth || Pos.Y >= (int32)canvasHeight)
//	{
//		return;
//	}
//
//	CPUData[(Pos.X + Pos.Y * canvasWidth) * bytesPerPixel] = blue; //b
//	CPUData[((Pos.X + Pos.Y * canvasWidth) * bytesPerPixel) + 1] = green; //g
//	CPUData[((Pos.X + Pos.Y * canvasWidth) * bytesPerPixel) + 2] = red; //r
//	CPUData[((Pos.X + Pos.Y * canvasWidth) * bytesPerPixel) + 3] = alpha; //a
//
//	return;
//}

void UDynTexture::setPixelColor(FIntPoint Pos, FColor Color)
{
	if (Pos.X >= (int32)canvasWidth || Pos.Y >= (int32)canvasHeight)
	{
		return;
	}

	CPUData[(Pos.X + Pos.Y * canvasWidth) * bytesPerPixel] = Color.B; //b
	CPUData[((Pos.X + Pos.Y * canvasWidth) * bytesPerPixel) + 1] = Color.G; //g
	CPUData[((Pos.X + Pos.Y * canvasWidth) * bytesPerPixel) + 2] = Color.R; //r
	CPUData[((Pos.X + Pos.Y * canvasWidth) * bytesPerPixel) + 3] = Color.A; //a

	return;
}

FColor UDynTexture::GetPixelColor(FIntPoint Pos)
{
	return FColor(CPUData[((Pos.X + Pos.Y * canvasWidth) * bytesPerPixel) + 2], CPUData[((Pos.X + Pos.Y * canvasWidth) * bytesPerPixel) + 1], CPUData[(Pos.X + Pos.Y * canvasWidth) * bytesPerPixel], CPUData[((Pos.X + Pos.Y * canvasWidth) * bytesPerPixel) + 3]);
}