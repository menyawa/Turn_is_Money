// Fill out your copyright notice in the Description page of Project Settings.


#include "Controller/DebugController.h"

// Sets default values for this component's properties
UDebugController::UDebugController() {
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
}

void UDebugController::BeginPlay() {
	initalize();
}

void UDebugController::initalize() {
	if (_myParent == nullptr) {
		_myParent = GetWorld()->SpawnActor<AActor>();
	}
}


void UDebugController::spawnParentIfNotExists() {
	if (_myLogger == nullptr) {
		_myLogger = NewObject<UDebugLogger>();
		_myParent->AddInstanceComponent(_myLogger);
		_myLogger->RegisterComponent();
	}
}

UDebugLogger* UDebugController::getLogger() noexcept {
	spawnParentIfNotExists();

	return _myLogger;
}