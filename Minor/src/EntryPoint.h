#pragma once

#ifdef MN_PLATFORM_WINDOWS

extern Minor::Application* Minor::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Minor::CreateApplication();
	app->Run();

	delete app;
	return 0;
}

#endif