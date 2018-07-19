// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "UnrealNetwork.h"
#include "Online.h"
#include "Engine/GameInstance.h"
#include "GameInstanceBase.generated.h"

/**
 * 
 */
UCLASS()
class UE_SPAWN_INVENTORY_API UGameInstanceBase : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UGameInstanceBase(const FObjectInitializer& ObjectInitializer);

	//CreateSession

	FOnCreateSessionCompleteDelegate OnCreateSessionCompleteDelegate;
	FOnStartSessionCompleteDelegate OnStartSessionCompleteDelegate;

	FDelegateHandle OnCreateSessionCompleteDelegateHandle;
	FDelegateHandle OnStartSessionCompleteDelegateHandle;

	TSharedPtr<class FOnlineSessionSettings> SessionSettings;

	virtual void OnCreateSessionComplete(FName SessionName, bool bWasSuccessful);
	void OnStartOnlineGameComplete(FName SessionName, bool bWasSuccessful);

	bool HostSession(TSharedPtr<const FUniqueNetId> UserId, FName SessionName, bool bIsLAN, bool bIsPresence, int32 MaxNumPlayers);

	UFUNCTION(BlueprintCallable)
		void OpenBattleMap();


	// OptionString
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName SessionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int MonsterLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int NumParty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString ParticipantID;

	FString OptionString;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString ServerIP = "192.168.0.115";


	// FindSession
	void FindSessions(TSharedPtr<const FUniqueNetId> UserId, bool bIsLAN, bool bIsPresence);

	FOnFindSessionsCompleteDelegate OnFindSessionsCompleteDelegate;
	FDelegateHandle OnFindSessionsCompleteDelegateHandle;

	TSharedPtr<class FOnlineSessionSearch> SessionSearch;
	void OnFindSessionsComplete(bool bWasSuccessful);

	UFUNCTION(BlueprintCallable)
		void FindOnlineGames();


	// JoinSession
	bool JoinBattleSession(TSharedPtr<const FUniqueNetId> UserId, FName SessionName, const FOnlineSessionSearchResult& SearchResult);

	FOnJoinSessionCompleteDelegate OnJoinSessionCompleteDelegate;
	FDelegateHandle OnJoinSessionCompleteDelegateHandle;

	void OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result);

	void JoinBattleGame(FOnlineSessionSearchResult SearchResult);



	// destroySession
	FOnDestroySessionCompleteDelegate OnDestroySessionCompleteDelegate;
	FDelegateHandle OnDestroySessionCompleteDelegateHandle;

	virtual void OnDestroySessionComplete(FName SessionName, bool bWasSuccessful);

	UFUNCTION(BlueprintCallable)
		void DestroySessionAndLeaveGame();
};
