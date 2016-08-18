#pragma once

namespace pyx { namespace Memory {

	class IJmpHook
	{

	public:
		virtual ~IJmpHook() { }

		/// Return if the hook is enabled
		virtual bool IsEnabled() = 0;

		/// Enable the hook, return true on success, return false if hook is already enabled
		virtual bool Enable() = 0;

		/// Disable the hook, return true on success, return false if hook is already disabled
		virtual bool Disable() = 0;

		/// Return the pointer of the detoured function
		virtual void* GetTargetPointer() = 0;

		/// Return the pointer of the trampoline function
		virtual void* GetTrampolinePointer() = 0;

		/// Return the detoured function
		template <class T> T GetTarget()
		{
			return static_cast<T>(GetTargetPointer());
		}

		/// Return the trampoline function
		template <class T> T GetTrampoline()
		{
			return static_cast<T>(GetTrampolinePointer());
		}

	};

} ///< Memory
} ///< Pyx