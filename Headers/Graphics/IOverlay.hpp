#pragma once

namespace pyx { namespace Graphics {

	class IOverlay
	{

	public:
		virtual ~IOverlay() { }

		/// Return if the overlay is actually active and visible
		virtual bool IsVisible() = 0;

		/// Toggle the visibility of the overlay
		virtual void ToggleVisibility() = 0;

	};

} ///< Graphics
} ///< Pyx