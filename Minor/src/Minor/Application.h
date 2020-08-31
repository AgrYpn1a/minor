#pragma once

#include "Core.h"
#include "Core/Window.h"

int main(int argc, char** argv);

namespace Minor
{
	class MINOR_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	private:
		std::unique_ptr<Window> m_Window;
		bool m_Running;
	};

	// To be defined in client.
	Application* CreateApplication();
}

