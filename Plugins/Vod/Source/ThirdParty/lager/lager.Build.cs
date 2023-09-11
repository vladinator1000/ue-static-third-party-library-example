// Fill out your copyright notice in the Description page of Project Settings.

using System.IO;
using UnrealBuildTool;

public class Lager : ModuleRules
{
	public Lager(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

		PublicSystemIncludePaths.Add(Path.Combine(ModuleDirectory, "include"));

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Zug"
			});
	}
}