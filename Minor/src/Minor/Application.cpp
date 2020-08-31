#include "minpch.h"
#include "Application.h"

#include "Minor/Events/ApplicationEvent.h"
#include "Minor/Log.h"


namespace Minor
{

	Application::Application() : m_Running{ true }, m_Window{ nullptr }
	{
		m_Window = std::unique_ptr<Window>(Window::Create());
	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategory::EventCategoryApplication))
		{
			MIN_TRACE(e);
		}

		if (e.IsInCategory(EventCategory::EventCategoryInput))
		{
			MIN_TRACE(e);
		}

		while (m_Running)
		{
			m_Window->OnUpdate();
		}
	}
}
