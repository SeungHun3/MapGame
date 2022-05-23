#pragma once
//2차원 좌표에 자기 자신을 표현한다


class AActor
{
public:

	
	char shape;
	int X;
	int Y;
	bool bCollison;


	void Render();
	virtual void Tick();

public:
	AActor();
	AActor(int NewX, int NewY, char NewShape, bool bNewCollision = false);
	virtual ~AActor();


};

