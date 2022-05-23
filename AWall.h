#pragma once
#include"AActor.h"

class AWall: public AActor
{
public: 
	AWall();
	AWall(int NewX, int NewY, char NewShape, bool bNewCollision = false);
	virtual ~AWall();

	
public:


};

