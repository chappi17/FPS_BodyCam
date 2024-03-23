// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class First_PersonShooting : ModuleRules
{
	public First_PersonShooting(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
