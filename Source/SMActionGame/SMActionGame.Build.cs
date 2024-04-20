// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SMActionGame : ModuleRules
{
	public SMActionGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
