#pragma once

namespace pyx {

	namespace Extensions
	{
		class IExtensionsContext;
	} ///< Memory

	namespace Memory
	{
		class IMemoryContext;
	} ///< Memory

	namespace Graphics
	{
		class IGraphicsContext;
	} ///< Graphics

	class IPyx
	{

	public:
		virtual ~IPyx() { }

		/// Return the Pyx module handle
		virtual void* GetPyxModule() = 0;

		/// Return the main Pyx directory path
		virtual const wchar_t* GetPyxDirectory() = 0;

		/// Return the Pyx MemoryContext
		virtual Memory::IMemoryContext& GetMemoryContext() = 0;

		/// Return the Pyx GraphicsContext
		virtual Graphics::IGraphicsContext& GetGraphicsContext() = 0;

		/// Return the Pyx ExtensionsContext
		virtual Extensions::IExtensionsContext& GetExtensionsContext() = 0;

	};

} ///< Pyx