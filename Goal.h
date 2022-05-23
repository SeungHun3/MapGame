#pragma once
#include"AActor.h"

class Goal: public AActor
{
public:
	void EndGame();

	virtual void Tick() override;


public:
	Goal();
	Goal(int NewX, int NewY, char NewShape, bool bNewCollision);
	virtual ~Goal();

};

