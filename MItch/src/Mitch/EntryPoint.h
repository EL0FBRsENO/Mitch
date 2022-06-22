#pragma once

#ifdef MT_PLATFORM_WINDOWS

extern Mitch::Application* Mitch::CreateApplication();

int main(int argc, char** argv) {
	printf("Sussy baka, Mitch Engine!");
	auto app = Mitch::CreateApplication();
	app->Run();
	delete app;
};

#endif
