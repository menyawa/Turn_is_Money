// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../Debug/DebugLogger.h"

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DebugController.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TURN_IS_MONEY_API UDebugController : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere)
	AActor* _myParent; //! �f�o�b�O�@�\�̐e�ƂȂ�A�N�^

	UPROPERTY(VisibleAnywhere)
	UDebugLogger* _myLogger; //! ���O�o��

public:	
	// Sets default values for this component's properties
	UDebugController();

protected:
	virtual void BeginPlay() override;

public:
	void initalize();

	void spawnParentIfNotExists();

	UDebugLogger* getLogger() noexcept;
};
