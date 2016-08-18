#pragma once
#include "IJmpHook.hpp"

namespace pyx { namespace Memory {

	class IMemoryContext
	{

	public:
		virtual ~IMemoryContext() { }

		/// Create a new JMP hook
		/// @p_Target							: The function to be intercepted
		/// @p_Detour							: The function to redirect on
		/// @p_Trampoline						: (opt) A pointer to be filled with the trampoline pointer
		virtual IJmpHook* CreateJmpHook(void* p_Target, void* p_Detour, void** p_Trampoline = nullptr) = 0;

		/// Create and apply a new JMP hook
		/// @p_Target							: The function to be intercepted
		/// @p_Detour							: The function to redirect on
		/// @p_Trampoline						: (opt) A pointer to be filled with the trampoline pointer
		IJmpHook* CreateAndApplyJmpHook(void* p_Target, void* p_Detour, void** p_Trampoline = nullptr)
		{
			IJmpHook* l_Result = CreateJmpHook(p_Target, p_Detour, p_Trampoline);
			l_Result->Enable();
			return l_Result;
		}

		/// Remove a created JMP hook, return true if hook exists and is removed correctly
		/// @p_Hook								: The instance of a previously created hook
		virtual void RemoveJmpHook(IJmpHook* p_Hook) = 0;

	};

} ///< Memory
} ///< Pyx