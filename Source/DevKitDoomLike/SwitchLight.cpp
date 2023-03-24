// Fill out your copyright notice in the Description page of Project Settings.


#include "SwitchLight.h"

// Sets default values
ASwitchLight::ASwitchLight()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	this->SphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere collision component"));
	this->SphereCollider->InitSphereRadius(300.0f);
	this->SphereCollider->SetGenerateOverlapEvents(true);
	this->SphereCollider->SetCollisionProfileName(TEXT("OverlapAllDynamic"));

	this->SphereCollider->OnComponentBeginOverlap.AddDynamic(this, &ASwitchLight::OnOverlapBegin);

	this->SphereCollider->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ASwitchLight::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASwitchLight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASwitchLight::OnOverlapBegin(
	class UPrimitiveComponent* OverlappedComp,
	class AActor* OtherActor,
	class UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult
) {

}
