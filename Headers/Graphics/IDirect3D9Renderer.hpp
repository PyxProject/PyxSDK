#pragma once
#include "IRenderer.hpp"
#include <d3d9.h>

namespace pyx { namespace Graphics {

	class IDirect3D9Renderer : public virtual IRenderer
	{

	public:
		typedef void OnPresentCallback(IDirect3D9Renderer& p_Renderer);
		typedef void OnPreResetCallback(IDirect3D9Renderer& p_Renderer);
		typedef void OnPostResetCallback(IDirect3D9Renderer& p_Renderer);
		typedef void OnDeviceChangedCallback(IDirect3D9Renderer& p_Renderer);

	public:
		virtual ~IDirect3D9Renderer() { }

		/// Return the current attached IDirect3DDevice9 pointer
		virtual IDirect3DDevice9* GetAttachedDevice() = 0;

		/// Register a callback which is called when the IDirect3DDevice9 change
		/// and return it's callback id.
		/// @p_Callback								: The callback to register
		virtual size_t RegisterOnDeviceChangedCallback(OnDeviceChangedCallback p_Callback) = 0;

		/// Unregister a callback
		/// @p_CallbackId							: The id of the callback to remove
		virtual void UnregisterOnDeviceChangedCallback(size_t p_CallbackId) = 0;

		/// Register a callback which is called right before IDirect3DDevice9::Present
		/// and return it's callback id.
		/// @p_Callback								: The callback to register
		virtual size_t RegisterOnPresentCallback(OnPresentCallback p_Callback) = 0;

		/// Unregister a callback
		/// @p_CallbackId							: The id of the callback to remove
		virtual void UnregisterOnPresentCallback(size_t p_CallbackId) = 0;

		/// Register a callback which is called right before IDirect3DDevice9::Reset
		/// and return it's callback id.
		/// @p_Callback								: The callback to register
		virtual size_t RegisterOnPreResetCallback(OnPreResetCallback p_Callback) = 0;

		/// Unregister a callback
		/// @p_CallbackId							: The id of the callback to remove
		virtual void UnregisterOnPreResetCallback(size_t p_CallbackId) = 0;

		/// Register a callback which is called after before IDirect3DDevice9::Reset
		/// and return it's callback id.
		/// @p_Callback								: The callback to register
		virtual size_t RegisterOnPostResetCallback(OnPostResetCallback p_Callback) = 0;

		/// Unregister a callback
		/// @p_CallbackId							: The id of the callback to remove
		virtual void UnregisterOnPostResetCallback(size_t p_CallbackId) = 0;

	};

} ///< Graphics
} ///< Pyx