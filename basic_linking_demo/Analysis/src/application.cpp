#include <Windows.h>
#include <iostream>
#include "AClass.h"
#include "Engine.h"

using std::cout;
using std::cin;

int main()
{
	SetConsoleTitle("console Output");

	//Create an instance of the AClass class (instantiation)
	AClass object1;

	//Call the sayHello() function using the dot operator
	object1.SayHello();

	Engine::EngineMessage();

	cin.get();
	return 0;
}