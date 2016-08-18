#pragma once

namespace pyx { namespace Graphics {

	class IDirect3D9Renderer;
	class IOverlay;
	class IGraphicsContext
	{

	public:
		virtual ~IGraphicsContext() { }

		/// Return the Pyx D3D9 interface
		virtual IDirect3D9Renderer& GetDirect3D9Renderer() = 0;

		/// Return the Pyx overlay interface
		virtual IOverlay& GetOverlay() = 0;

	};

} ///< Memory
} ///< Pyx