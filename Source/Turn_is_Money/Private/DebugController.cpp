// Fill out your copyright notice in the Description page of Project Settings.


#include "DebugController.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
ADebugController::ADebugController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	UKismetSystemLibrary::PrintString(this, "Constructor");
}

// Called when the game starts or when spawned
void ADebugController::BeginPlay()
{
	Super::BeginPlay();
	UKismetSystemLibrary::PrintString(this, "BeginPlay");
}

// Called every frame
void ADebugController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

