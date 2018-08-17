// Fill out your copyright notice in the Description page of Project Settings.

#include "FieldGameModeBase.h"
#include "Kismet/GameplayStatics.h"

void AFieldGameModeBase::PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	FString TempUserId = UGameplayStatics::ParseOption(*Options, "UserID");
	UserID = TempUserId;

	FString TempFromBattle = UGameplayStatics::ParseOption(*Options, "IsFromBattle");
	IsFromBattle = TempFromBattle;

	FString TempPartyBattle = UGameplayStatics::ParseOption(*Options, "IsPartyBattle");
	IsPartyBattle = TempPartyBattle;
}