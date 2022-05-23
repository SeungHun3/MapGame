#include "AActor.h"
#include<Windows.h>
#include<iostream>

using namespace std;
void AActor::Render()
{
	
	COORD Cur;
	Cur.X = X;
	Cur.Y = Y;
	SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE), Cur);
	cout << shape;
}

void AActor::Tick()
{
}

AActor::AActor()
{
	X = 0;
	Y = 0;
	shape = ' ';
	bCollison = false;
}

AActor::AActor(int NewX, int NewY, char NewShape, bool bNewCollision)
{
	X = NewX;
	Y = NewY;
	shape = NewShape;
	bCollison = bNewCollision;
}

AActor::~AActor()
{
}
