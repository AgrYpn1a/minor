#pragma once

#include "Core.h"

namespace Minor
{
	class MINOR_API Application
	{
	public:
		Application();
		virtual ~Application(); 

		void Run();
	};

	// To be defined in client.
	Application* CreateApplication();
}

