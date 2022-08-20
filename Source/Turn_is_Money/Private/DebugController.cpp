// Fill out your copyright notice in the Description page of Project Settings.


#include "DebugController.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
ADebugController::ADebugController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrintLog("Constructor");
}

// Called when the game starts or when spawned
void ADebugController::BeginPlay()
{
	Super::BeginPlay();
	PrintLog("BeginPlay");
}

// Called every frame
void ADebugController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

//! @breif ログ出力を行う
//! @param[in] text 出力するテキスト
void ADebugController::PrintLog(const FString text) const noexcept
{
	UKismetSystemLibrary::PrintString(this, text);
}

