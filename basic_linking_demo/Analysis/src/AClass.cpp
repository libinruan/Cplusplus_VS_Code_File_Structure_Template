#include <iostream>
#include "AClass.h"

using std::cout;
using std::endl;

AClass::AClass()
{
}

AClass::~AClass()
{
}

void AClass::SayHello()
{
	cout << " Say hello from AClass!" << endl;
	system("PAUSE");
}