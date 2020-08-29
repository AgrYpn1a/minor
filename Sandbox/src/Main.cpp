#include "Minor.h"

class Sandbox : public Minor::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

// The Entry point of the app
Minor::Application* Minor::CreateApplication()
{
	return new Sandbox();
}
