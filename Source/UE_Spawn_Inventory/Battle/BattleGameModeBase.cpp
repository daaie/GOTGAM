// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "GameInstanceBase.h"

void ABattleGameModeBase::PreLogin(const FString & Options, const FString & Address, const FUniqueNetIdRepl & UniqueId, FString & ErrorMessage)
{
	FString NewUserId = UGameplayStatics::ParseOption(*Options, "ParticipantID");
	UserID = NewUserId;
}

void ABattleGameModeBase::Destroy()
{
	UGameInstance *GameInstanceTemp = GetGameInstance();
	UGameInstanceBase *GameInstanceBase = Cast<UGameInstanceBase>(GameInstanceTemp);
	GameInstanceBase->SessionName = FName(*UserID);
	GameInstanceBase->DestroySessionAndLeaveGame();
}
