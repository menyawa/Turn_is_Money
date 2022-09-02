// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "DebugController.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameController.generated.h"

UCLASS()
class TURN_IS_MONEY_API AGameController : public AActor
{
	GENERATED_BODY()
	
private:
	UPROPERTY(VisibleAnywhere)
	UDebugController* _myDebugController; //! デバッグのコントローラクラス

public:	
	// Sets default values for this actor's properties
	AGameController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
