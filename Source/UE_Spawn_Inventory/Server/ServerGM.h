// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ServerGM.generated.h"

/**
 * 
 */
UCLASS()
class UE_SPAWN_INVENTORY_API AServerGM : public AGameModeBase
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;
	
	
	
};
