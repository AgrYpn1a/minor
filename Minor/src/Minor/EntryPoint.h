#pragma once

#ifdef MN_PLATFORM_WINDOWS

extern Minor::Application* Minor::CreateApplication();

int main(int argc, char** argv)
{
	Minor::Log::Init();

	MIN_WARN("Initialized log.");

	int var = 5;
	MIN_INFO("Hello Var = {0}", var);

	auto app = Minor::CreateApplication();
	app->Run();

	delete app;
	return 0;
}

#endif