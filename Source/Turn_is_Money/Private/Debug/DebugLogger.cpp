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

//! @breif ログ出力を行う
//! @param[in] text 出力するテキスト
void UDebugLogger::printLog(const FString text) const noexcept {
	outputText(text, FLinearColor(0.0, 0.66, 1.0));
}

//! @breif エラーログ出力を行う
//! @param[in] text 出力するテキスト
void UDebugLogger::printLogError(const FString text) const noexcept {
	outputText(TEXT("Error: ") + text, FLinearColor(1.0, 0.0, 0.0));
}

//! @breif エラーログ出力を行う
//! 
//! @param[in] text 出力するテキスト
//! @param[in] textColor テキストの色
void UDebugLogger::outputText(const FString text, const FLinearColor textColor) const noexcept {
	UKismetSystemLibrary::PrintString(this, text, true, true, textColor);
}