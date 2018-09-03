// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

[SupportedPlatforms(UnrealPlatformClass.Server)]
public class UE_Spawn_InventoryServerTarget : TargetRules
{
	public UE_Spawn_InventoryServerTarget(TargetInfo Target): base(Target)
   {
       Type = TargetType.Server;
       ExtraModuleNames.Add("UE_Spawn_Inventory");
   }
}
