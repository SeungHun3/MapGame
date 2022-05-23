#include "Player.h"

Player::Player()
	:AActor()
{
}
Player::Player(int NewX, int NewY, char NewShape, bool bNewCollision)
	: AActor(NewX, NewY, NewShape, bNewCollision)
{
	

}

Player::~Player()
{
}

void Player::Tick()
{
}
