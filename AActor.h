#pragma once
//2���� ��ǥ�� �ڱ� �ڽ��� ǥ���Ѵ�


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

