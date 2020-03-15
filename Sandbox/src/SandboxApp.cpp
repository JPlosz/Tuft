#include "Tuft.h"

class Sandbox : public Tuft::Application 
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Tuft::Application* Tuft::CreateApplication()
{
	return new Sandbox();
}
