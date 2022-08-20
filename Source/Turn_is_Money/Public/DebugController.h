// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DebugController.generated.h"

UCLASS()
//! @breif �f�o�b�O�֌W�̃N���X
class TURN_IS_MONEY_API ADebugController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADebugController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//! @breif ���O�o�͂��s��
	//! @param[in] text �o�͂���e�L�X�g
	void PrintLog(const FString text) const noexcept;
};
