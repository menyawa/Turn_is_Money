// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DebugLogger.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TURN_IS_MONEY_API UDebugLogger : public UActorComponent {
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UDebugLogger();

	//! @breif ���O�o�͂��s��
	//! 
	//! @param[in] text �o�͂���e�L�X�g
	void printLog(const FString text) const noexcept;

	//! @breif �G���[���O�o�͂��s��
	//! 
	//! @param[in] text �o�͂���e�L�X�g
	void printLogError(const FString text) const noexcept;

private:
	//! @breif �e�L�X�g�o�͂��s��
	//! 
	//! @param[in] text �o�͂���e�L�X�g
	//! @param[in] textColor �e�L�X�g�̐F
	//! 
	//! @return
	void outputText(const FString text, const FLinearColor textColor) const noexcept;
};
