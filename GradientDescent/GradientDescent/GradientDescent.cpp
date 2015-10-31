// GradientDescent.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Operations.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Constant c2(2);
	Constant c6(6);
	Constant c11(11);

	Variable x("x");
	Variable y("y");

	Power px(&x, &c2);
	Power py(&y, &c2);

	Div d(&py, &c2);

	Mul x6(&c6, &x);
	Mul y2(&c2, &y);

	Add a1(&px, &d);
	Sub a2(&a1, &x6);
	Add a3(&a2, &y2);
	Add f(&a3, &c11);

	Point p;
	p.Insert("x", 1);
	p.Insert("y", 1);

	cout << f << endl;

	_getch();
	return 0;
}

