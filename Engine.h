#pragma once
#include"World.h"
#include"Player.h"
#include"AWall.h"
#include"Goal.h"
#include"Floor.h"
#include<string>
#include"Monster.h"

class Engine
{
public:
	World* MyWorld;
	bool bRunning;
	void Init();
	void Load(string MapFilename);
	void Run();
	void Terminate();

public:
	Engine();
	virtual ~Engine();
};

