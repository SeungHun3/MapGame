#pragma once
#include<vector>
#include"AActor.h"

using namespace std;

class World
{

public:
	vector<AActor*>MyActors;
	void Tick();
	void Render();


public:
	World();
	virtual ~World();

};

