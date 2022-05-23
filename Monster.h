#pragma once
#include"AActor.h"

class Monster : public AActor
{
public:

	Monster();
	Monster(int NewX, int NewY, char NewShape, bool bNewCollision);

	virtual ~Monster();

public:
	virtual void Tick() override;



};


