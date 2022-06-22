#include <Mitch.h>

class Sandbox : public Mitch::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Mitch::Application* Mitch::CreateApplication()
{
	return new Sandbox();
}