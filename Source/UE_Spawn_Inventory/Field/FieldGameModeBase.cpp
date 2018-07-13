// Fill out your copyright notice in the Description page of Project Settings.

#include "FieldGameModeBase.h"
#include "Kismet/GameplayStatics.h"

void AFieldGameModeBase::PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	FString NewUserId = UGameplayStatics::ParseOption(*Options, "UserID");
	UserID = NewUserId;
}