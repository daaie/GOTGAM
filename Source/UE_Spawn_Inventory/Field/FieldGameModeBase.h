// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FieldGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class UE_SPAWN_INVENTORY_API AFieldGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:

	virtual void PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FString UserID = TEXT("Server");

};
