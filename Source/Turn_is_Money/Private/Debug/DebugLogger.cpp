// Fill out your copyright notice in the Description page of Project Settings.


#include "Debug/DebugLogger.h"

// PrintString
#include "Kismet/KismetSystemLibrary.h"

// Sets default values for this component's properties
UDebugLogger::UDebugLogger() {
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
}

//! @breif ���O�o�͂��s��
//! @param[in] text �o�͂���e�L�X�g
void UDebugLogger::printLog(const FString text) const noexcept {
	outputText(text, FLinearColor(0.0, 0.66, 1.0));
}

//! @breif �G���[���O�o�͂��s��
//! @param[in] text �o�͂���e�L�X�g
void UDebugLogger::printLogError(const FString text) const noexcept {
	outputText(TEXT("Error: ") + text, FLinearColor(1.0, 0.0, 0.0));
}

//! @breif �G���[���O�o�͂��s��
//! 
//! @param[in] text �o�͂���e�L�X�g
//! @param[in] textColor �e�L�X�g�̐F
void UDebugLogger::outputText(const FString text, const FLinearColor textColor) const noexcept {
	UKismetSystemLibrary::PrintString(this, text, true, true, textColor);
}