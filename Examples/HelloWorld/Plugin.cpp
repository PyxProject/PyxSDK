#include <IPyx.hpp>
#include <Extensions/IPlugin.hpp>
#include <Windows.h>

/// Called when Pyx load the plugin
/// @p_Pyx						: Pointer to main Pyx interface
/// @p_Plugin					: Pointer to a IPlugin interface representing the current plugin
/// Note : This function MUST be exported !
extern "C" __declspec(dllexport) void Pyx_OnLoad(pyx::IPyx* p_Pyx, pyx::Extensions::IPlugin* p_Plugin)
{
	MessageBoxA(nullptr, "HelloWorld loaded !", p_Plugin->GetIdentifier(), MB_ICONINFORMATION);
}

/// Called when Pyx unload the plugin
/// Note : This function should be exported !
extern "C" __declspec(dllexport) void Pyx_OnUnload()
{
	MessageBoxA(nullptr, "HelloWorld unloading ...", "Pyx plugin", MB_ICONINFORMATION);
}