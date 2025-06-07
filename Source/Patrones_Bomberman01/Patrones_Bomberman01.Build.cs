// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Patrones_Bomberman01 : ModuleRules
{
	public Patrones_Bomberman01(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
