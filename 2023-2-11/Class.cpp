#include <iostream>
#include <string.>
#include "Dot.h"
#include "Cycle.h"
using namespace std;

/*
访问权限；

以下两个统一称为成员
属性；
行为；
*/
const double PI = 3.14;


//class Cycle
//{
//public:
//	int radius;
//	double Count()
//	{
//		return 2 * PI * radius;
//	}
//};



class Student
{
public:
	string name;
	int no;

	void showInform()
	{
		cout << "姓名" << name << "学号" << no << endl;
	}
};

/* 成员私有权限，给一个公开修改的方法 */
class Number
{
private:
	int num;

public:

	void SetNum()
	{
		do
		{
			cin >> num;

		} while (num > 100);		
	}

	int ReadNum()
	{
		return num;
	}
};




class Cube
{
private:
	int chang;
	int kuan;
	int gao;

public:
	int GetVolume()
	{
		return chang*kuan*gao;
	}

	void Set(int a, int b, int c)
	{
		chang = a;
		kuan = b;
		gao = c;
	}

	bool JudgeOther(Cube* otherCube)
	{
		if (GetVolume() == otherCube->GetVolume())
		{
			return true;
		}
		else
		{
			return false;
		}
	}

};



bool Judge(Cube * cube1, Cube * cube2)
{
	if (cube1->GetVolume() == cube2->GetVolume())
	{
		return true;
	}
	else
	{
		return false;
	}
}




//------------------------------------------------------------------------




int main()
{
	/* 
	实例化 通过一个类创建一个对象
	*/
	//Cycle cycle01;
	//cycle01.radius = 3;
	//cout << cycle01.Count() << endl;


	//Student n1;
	//n1.name = "小碗";
	//n1.no = 200;
	//n1.showInform();

	//Number num1;
	//num1.SetNum();
	//cout << "当前值为：" << num1.ReadNum() << endl;


	//Cube myCube;
	//Cube myCube2;
	//myCube.Set(3, 4, 5);
	//myCube2.Set(4, 5, 9);
	//cout << myCube.JudgeOther(&myCube2);

	Dot myDot;
	Cycle myCycle;
	myDot.SetDotXY(9, 9);
	myCycle.SetCycle(6, 6, 6);
	


	system("pause");
	return 0;
}