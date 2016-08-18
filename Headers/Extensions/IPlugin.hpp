#pragma once

namespace pyx { namespace Extensions {

	class IPlugin
	{

	public:
		virtual ~IPlugin() { }

		/// Return the unique plugin identifier
		virtual const char* GetIdentifier() = 0;

	};

} ///< Extensions
} ///< Pyx