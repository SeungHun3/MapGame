#include<iostream>

#include"Engine.h"

using namespace std;


int main()
{
	
	Engine* MyEngine = new Engine();
	MyEngine->Load("Level01.map");
	MyEngine->Run();

	delete MyEngine;
	MyEngine = nullptr;


	return 0;
}
