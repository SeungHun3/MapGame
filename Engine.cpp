#include "Engine.h"
#include<fstream>

void Engine::Init()
{
	MyWorld = new World(); // 선언때 포인터로 했다
	bRunning = true;

}

void Engine::Load(string MapFilename)
{
	fstream MapFile("Level01.map");

	int Y = 0;


	while (MapFile.peek() != EOF) // EOF = End Of File
	{
		char Buffer[1024] = { 0, };
		MapFile.getline(Buffer, 1024);

		for (size_t X = 0; X < strlen(Buffer); ++X)
		{
			char Cursor = Buffer[X];
			switch (Cursor)
			{
			case '#':
				MyWorld->MyActors.push_back(new AWall(X, Y, '#', true)); // AActor닫을때 delete로 전부 닫는다
				break;
			case ' ':
				MyWorld->MyActors.push_back(new Floor(X, Y, ' ', false));
				break;
			case 'P':
				MyWorld->MyActors.push_back(new Player(X, Y, 'P', true));
				break;
			case 'G':
				MyWorld->MyActors.push_back(new Goal(X, Y, 'G', false));
				break;
			case 'M':
				MyWorld->MyActors.push_back(new Monster(X, Y, 'M', true));
				break;
			}
		}


		Y++;
	}

	MapFile.close();
}


void Engine::Run()
{
	while (bRunning) 
	{
		MyWorld->Tick();
		MyWorld->Render();
	}
}

void Engine::Terminate()
{
	delete MyWorld;
	MyWorld = nullptr;
}

Engine::Engine()
{
	Init();
}

Engine::~Engine()
{
	Terminate();
}
