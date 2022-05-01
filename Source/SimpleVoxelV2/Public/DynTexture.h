// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <memory>
#include "Engine/Texture2D.h"
#include "UObject/Object.h"
#include "DynTexture.generated.h"

UCLASS(Blueprintable, BlueprintType)
class SIMPLEVOXELV2_API UDynTexture : public UObject
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DynTexture | Variables")
		UTexture2D* RenderTexture;

	UPROPERTY(BlueprintReadOnly, Category = "DynTexture | Variables")
		TArray<uint8> CPUData;

	UFUNCTION(BlueprintCallable, Category = "DynTexture | Function")
		void InitializeCanvas(const int32 pixelsH, const int32 pixelsV);

	UFUNCTION(BlueprintCallable, Category = "DynTexture | Function")
		void UpdateCanvas();

	UFUNCTION(BlueprintCallable, Category = "DynTexture | Function")
		void ClearCanvas(bool IsBlack);
	
	//UFUNCTION(BlueprintCallable)
	//	void setPixelColor(FIntPoint Pos, uint8 red, uint8 green, uint8 blue, uint8 alpha);

	UFUNCTION(BlueprintCallable, Category = "DynTexture | Function")
		void setPixelColor(FIntPoint Pos, FColor Color);

	UFUNCTION(BlueprintCallable, Category = "DynTexture | Function")
		FColor GetPixelColor(FIntPoint Pos);

	UDynTexture();
	~UDynTexture();

private:

	UPROPERTY()
		uint32 canvasWidth;
	UPROPERTY()
		uint32 canvasHeight;
	UPROPERTY()
		uint32 bytesPerPixel;
	UPROPERTY()
		uint32 bufferPitch;
	UPROPERTY()
		uint32 bufferSize;

	TUniquePtr<FUpdateTextureRegion2D> echoUpdateTextureRegion;
};
