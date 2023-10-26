# UE5-Window-Status-Subsystem
A very small subsystem to broadcast blueprint events when the window loses or regains focus

## Setup

Copy `WindowFocusSubsystem.cpp` and `WindowFocusSubsystem.h` to your game's `Source` directory.

In `Game.Build.cs`, add `"Slate"` to your list of `DependencyNames`

```cs
	PublicDependencyModuleNames.AddRange(new string[] {
        "Core",
        "CoreUObject",
        "Engine",
        "InputCore",
        "Slate"     /* <-- Add "Slate" here */
        });
```

Close Unreal Editor and build your game from your IDE.

## Usage
In your  Blueprint get the `Window Focus Subsystem` and `Bind Event to On Focus Changed`.

![Blueprint](https://raw.githubusercontent.com/sawyersteven/UE5-Window-Status-Subsystem/master/BlueprintUsage.png)

Adding a breakpoint in the event may cause problems in the editor. Debug with caution.