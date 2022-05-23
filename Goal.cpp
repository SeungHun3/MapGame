#include "Goal.h"

void Goal::EndGame()
{
}

void Goal::Tick()
{
}

Goal::Goal()
	:AActor()
{
}
Goal::Goal(int NewX, int NewY, char NewShape, bool bNewCollision)
: AActor(NewX, NewY, NewShape, bNewCollision)
{
	

}

Goal::~Goal()
{
}
