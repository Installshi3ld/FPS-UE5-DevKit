// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/PointLightComponent.h"

#include "pawnLghtCpp.generated.h"

UCLASS()
class DEVKITDOOMLIKE_API ApawnLghtCpp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ApawnLghtCpp();

	UPROPERTY(EditAnywhere, Category = "Custom light")
		float Intensity;

	UPROPERTY(EditAnywhere, Category = "Custom light")
		bool IsVisibleAtStart;

	UPROPERTY(EditAnywhere, Category = "Custom light")
		UPointLightComponent* PointLight;




protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Custom light")
		virtual void ToggleLight();

};
