// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Math/UnrealMathUtility.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "CPP_FunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class DEVKITDOOMLIKE_API UCPP_FunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "Custom CPP")
		static void Print(FString message);

	UFUNCTION(BlueprintCallable, Category = "Custom CPP")
		static void ToggleAllLights();
};


