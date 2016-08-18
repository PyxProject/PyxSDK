#pragma once
#include "IRenderer.hpp"
#include <d3d9.h>

namespace pyx { namespace Graphics {

	class IRenderer
	{

	public:
		typedef void OnFrameCallback(IRenderer& p_Renderer);

		enum class RendererType : int
		{
			OpenGL,
			Direct3D9,
			Direct3D10,
			Direct3D11,
			Direct3D12,
			NumEntries
		};

	public:
		virtual ~IRenderer() { }

		/// Register a callback which is called before a frame is presented
		/// and return it's callback id.
		/// @p_Callback								: The callback to register
		virtual size_t RegisterOnFrameCallback(OnFrameCallback p_Callback) = 0;

		/// Unregister a callback
		/// @p_CallbackId							: The id of the callback to remove
		virtual void UnregisterOnFrameCallback(size_t p_CallbackId) = 0;

		/// Return the window handle of the window we are attached on
		virtual HWND GetAttachedWindow() = 0;

	};

} ///< Graphics
} ///< Pyx