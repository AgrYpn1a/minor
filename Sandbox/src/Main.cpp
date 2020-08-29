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

Minor::Application* Minor::CreateApplication()
{
	return new Sandbox();
}
