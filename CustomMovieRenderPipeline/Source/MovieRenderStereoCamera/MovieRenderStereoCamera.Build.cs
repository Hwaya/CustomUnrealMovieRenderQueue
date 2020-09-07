// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MovieRenderStereoCamera : ModuleRules
{
	public MovieRenderStereoCamera(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"Core",
				"CoreUObject",
				"InputCore",
				"RenderCore",
				"RHI",
				"UMG",
				"Landscape", // To flush grass
				"AudioMixer",
				"NonRealtimeAudioRenderer",
                "ImageWrapper",
                "RenderCore",
                "CinematicCamera",
                "LevelSequence",
                "MovieScene",
            }
		);

		PublicDependencyModuleNames.AddRange(
			new string[] {
				"SlateCore",
                "MovieScene",
                "MovieSceneTracks",
				"LevelSequence",
				"Engine",
                "ImageWriteQueue", // For debug tile writing
            }
        );
	}
}
