#include "AWall.h"

AWall::AWall()
	: AActor()
{
	
}

AWall::~AWall()
{
}
AWall::AWall(int NewX, int NewY, char NewShape, bool bNewCollision)
:AActor(NewX, NewY, NewShape, bNewCollision)
{
	
}
