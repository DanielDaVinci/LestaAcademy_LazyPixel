// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MainProject : ModuleRules
{
	public MainProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"AIModule",
			"NavigationSystem",
			"StateTreeModule",
            "GameplayStateTreeModule",
            "GameplayTags",
            "GameplayTasks",
			"UMG",
			"Niagara",
            "DismembermentSystem",
            "AkAudio"
        });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
