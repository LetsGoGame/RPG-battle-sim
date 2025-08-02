// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class RPGBattleSim : ModuleRules
{
	public RPGBattleSim(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
