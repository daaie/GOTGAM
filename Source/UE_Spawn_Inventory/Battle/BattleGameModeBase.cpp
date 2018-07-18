// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleGameModeBase.h"
#include "Kismet/GameplayStatics.h"

void ABattleGameModeBase::PreLogin(const FString & Options, const FString & Address, const FUniqueNetIdRepl & UniqueId, FString & ErrorMessage)
{
	FString NewUserId = UGameplayStatics::ParseOption(*Options, "ParticipantID");
	UserID = NewUserId;
}
