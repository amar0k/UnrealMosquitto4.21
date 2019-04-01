// Some copyright should be here...

using UnrealBuildTool;
using System.IO;

public class mqtt : ModuleRules
{
	public mqtt(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "BlueprintGraph" });

        PrivateDependencyModuleNames.AddRange(new string[] { });

        // /!\ add this to the end /!\
        LoadThirdPartyDLL("mosquitto", Target);
        LoadThirdPartyDLL("mosquittopp", Target);
    }

    private string ThirdPartyPath
    {
        get { return Path.GetFullPath(Path.Combine(ModuleDirectory, "../../ThirdParty/")); }
    }

    public bool LoadThirdPartyDLL(string libname, ReadOnlyTargetRules Target)
    {
        bool isLibrarySupported = false;

        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            isLibrarySupported = true;

            string PlatformString = (Target.Platform == UnrealTargetPlatform.Win64) ? "x64" : "x86";
            string LibrariesPath = Path.Combine(ThirdPartyPath, libname, "Libraries");

            PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, libname + "." + PlatformString + ".lib"));

            // Include path
            PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, libname, "Includes"));
        }

        PublicDefinitions.Add(string.Format("WITH_" + libname.ToUpper() + "_BINDING={0}", isLibrarySupported ? 1 : 0));

        return isLibrarySupported;
    }
}
