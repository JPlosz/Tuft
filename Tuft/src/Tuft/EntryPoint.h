#pragma once

#ifdef TF_PLATFORM_WINDOWS

extern Tuft::Application* Tuft::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Tuft::CreateApplication();
	app->Run();
	delete app;
}

#endif // TF_PLATFORM_WINDOWS
