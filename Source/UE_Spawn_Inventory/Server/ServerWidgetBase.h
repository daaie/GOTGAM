// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ServerWidgetBase.generated.h"

/**
 * 
 */
UCLASS()
class UE_SPAWN_INVENTORY_API UServerWidgetBase : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UButton* Server1BT;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UEditableTextBox* ServerIP;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FString UserID;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FString OptionString;

	UFUNCTION()
	void StartServer();
};