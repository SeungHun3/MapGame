#pragma once
#include"AActor.h"

class Floor: public AActor
{
public:
	Floor();
	Floor(int NewX, int NewY, char NewShape, bool bNewCollision);
	virtual ~Floor();
	



};

