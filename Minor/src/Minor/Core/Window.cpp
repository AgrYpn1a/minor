#include "minpch.h"

#include "Window.h"

#ifdef MN_PLATFORM_WINDOWS
#include "Platform/WindowsWindow.h"
#endif

namespace Minor
{
	Window* Window::Create(const WindowProps& props)
	{
#ifdef MN_PLATFORM_WINDOWS
		return new WindowsWindow(props);
#else
		MIN_CORE_ASSERT(false, "Unknown platform!");
		return nullptr;
#endif
	}

}