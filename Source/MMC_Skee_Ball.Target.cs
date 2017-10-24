// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class MMC_Skee_BallTarget : TargetRules
{
	public MMC_Skee_BallTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "MMC_Skee_Ball" } );
	}
}
