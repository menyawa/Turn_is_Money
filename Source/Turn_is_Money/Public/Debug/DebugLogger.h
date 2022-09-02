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

	//! @breif ログ出力を行う
	//! 
	//! @param[in] text 出力するテキスト
	void printLog(const FString text) const noexcept;

	//! @breif エラーログ出力を行う
	//! 
	//! @param[in] text 出力するテキスト
	void printLogError(const FString text) const noexcept;

private:
	//! @breif テキスト出力を行う
	//! 
	//! @param[in] text 出力するテキスト
	//! @param[in] textColor テキストの色
	//! 
	//! @return
	void outputText(const FString text, const FLinearColor textColor) const noexcept;
};
