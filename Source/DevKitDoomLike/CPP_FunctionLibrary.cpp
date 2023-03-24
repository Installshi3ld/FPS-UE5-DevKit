// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_FunctionLibrary.h"

#include <Kismet/GameplayStatics.h>
#include "Engine/World.h"

#include "pawnLghtCpp.h"

/// <summary>
/// Super
/// </summary>
/// <param name="message"></param>
/// 
void UCPP_FunctionLibrary::Print(FString message) {
#if UE_EDITOR
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, message);
#endif
	UE_LOG(LogTemp, Log, TEXT("%s"), *message);
}

void UCPP_FunctionLibrary::ToggleAllLights() {
	UWorld* world = GEngine->GameViewport->GetWorld();
	
	TArray<AActor*> Actors;
	UGameplayStatics::GetAllActorsOfClass(
		world,
		ApawnLghtCpp::StaticClass(),
		Actors
	);

	for (AActor* tmpActor : Actors) {
		((ApawnLghtCpp*)tmpActor)->ToggleLight();
	}
}