#pragma once
#include <iostream>
using namespace std;

class Dot
{
private:
	int X;
	int Y;
public:
	void SetDotXY(int x, int y)
	{
		X = x;
		Y = y;
	}
	int GetX()
	{
		return X;
	}
	int GetY()
	{
		return Y;
	}
};
