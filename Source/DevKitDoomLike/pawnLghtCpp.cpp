// Fill out your copyright notice in the Description page of Project Settings.


#include "pawnLghtCpp.h"

// Sets default values
ApawnLghtCpp::ApawnLghtCpp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	this->Intensity = 3000.0f;

	this->PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
	this->PointLight->Intensity = this->Intensity;
	this->PointLight->SetVisibility(true);
	this->PointLight->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ApawnLghtCpp::BeginPlay()
{
	Super::BeginPlay();
	this->PointLight->SetVisibility(this->IsVisibleAtStart);
}

// Called every frame
void ApawnLghtCpp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ApawnLghtCpp::ToggleLight()
{
	this->PointLight->ToggleVisibility();
}

