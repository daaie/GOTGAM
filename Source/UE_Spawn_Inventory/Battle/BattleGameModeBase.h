// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BattleGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class UE_SPAWN_INVENTORY_API ABattleGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	// User.

	virtual void PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		FString UserID = TEXT("Server");


	// Server Variable.

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		int MonsterLevel = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		int NumParty = 0;

	UFUNCTION(Exec)
		void Destroy();
};
