#pragma once
#include"AActor.h"

class Player : public AActor
{
public:

	Player();
	Player(int NewX, int NewY, char NewShape, bool bNewCollision);

	virtual ~Player();

public:
	virtual void Tick() override;
	
	

};

