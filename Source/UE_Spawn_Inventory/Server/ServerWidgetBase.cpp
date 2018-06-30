// Fill out your copyright notice in the Description page of Project Settings.

#include "ServerWidgetBase.h"
#include "Components/Button.h"
#include "Components/EditableTextBox.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/WorldSettings.h"


void UServerWidgetBase::NativeConstruct()
{
	Server1BT = Cast<UButton>(GetWidgetFromName(TEXT("Server1BT")));
	if (Server1BT)
	{
		Server1BT->OnClicked.AddDynamic(this, &UServerWidgetBase::StartServer);
	}
	ServerIP = Cast<UEditableTextBox>(GetWidgetFromName(TEXT("ServerIP")));
}
void UServerWidgetBase::StartServer()
{
	if (ServerIP)
	{
		if (!ServerIP->GetText().IsEmpty())
		{
			OptionString = TEXT("UserID=") + UserID;
			UGameplayStatics::OpenLevel(GetWorld(), *ServerIP->GetText().ToString(),false, OptionString);
		}
	}
}