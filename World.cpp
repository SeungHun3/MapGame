#include "World.h"

void World::Tick()
{
	/*for (int i = 0; i < MyActors.size(); ++i)
	{
		MyActors[i]->Tick();
	}

	for (vector<AActor*>::iterator iter = MyActors.begin(); iter !=MyActors.end(); ++iter)
	{
	(*iter)->Tick();
	}

	*/
	for (auto AActor : MyActors) // ( AActor* AActor : MyActors)
	{
		AActor->Tick();
	}
}

void World::Render()
{
	for ( AActor* AActor : MyActors)
	{
		AActor->Render();
	}
}

World::World()
{
}

World::~World()
{
	for (AActor* AActor : MyActors)
	{
		delete AActor;
	}
	MyActors.clear();
}
