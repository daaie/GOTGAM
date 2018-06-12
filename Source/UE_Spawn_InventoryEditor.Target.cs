// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class UE_Spawn_InventoryEditorTarget : TargetRules
{
	public UE_Spawn_InventoryEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "UE_Spawn_Inventory" } );
	}
}
