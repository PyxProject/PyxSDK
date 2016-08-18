#pragma once

namespace pyx { namespace Extensions {

	class IPlugin;
	class IExtensionsContext
	{

	public:
		virtual ~IExtensionsContext() { }

		/// Return the full directory path for extensions
		virtual const wchar_t* GetExtensionsDirectory() = 0;

		/// Attempt to get a plugin frim it's identifier name (author.extension.plugin)
		/// @p_Identifier								: The identifier of the plugin
		virtual IPlugin* GetPlugin(const char* p_Identifier) = 0;

	};

} ///< Extensions
} ///< Pyx