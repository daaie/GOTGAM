// Fill out your copyright notice in the Description page of Project Settings.

#include "ServerGM.h"
#include "Kismet/GameplayStatics.h"

void AServerGM::BeginPlay()
{
	UGameplayStatics::OpenLevel(this, TEXT("FieldMap01"), true, TEXT("listen"));
}

