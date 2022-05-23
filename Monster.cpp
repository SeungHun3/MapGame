#include "Monster.h"

Monster::Monster()
	:AActor()
{
}
Monster::Monster(int NewX, int NewY, char NewShape, bool bNewCollision)
	: AActor(NewX, NewY, NewShape, bNewCollision)
{


}

Monster::~Monster()
{
}

void Monster::Tick()
{
}
