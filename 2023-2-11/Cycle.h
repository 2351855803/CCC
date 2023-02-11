#pragma once
#include <iostream>

using namespace std;

class Cycle
{
private:
	int radius;
	int X;
	int Y;
public:
	void SetCycle(int x, int y, int my_radius)
	{
		X = x;
		Y = y;
		radius = my_radius;
	}


};