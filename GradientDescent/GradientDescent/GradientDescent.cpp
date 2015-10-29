// GradientDescent.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Operations.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Constant c(1);
	Variable v1("x");
	Variable v2("y");
	Add a1(&v1, &v2);
	Add a2(&a1, &c);
	//Div d(&c, &a2);

	Point p;
	p.Insert("x", 1);
	p.Insert("y", 1);

	cout << a2 << endl;
	cout << a2.NumDerivative("x", p) << endl;

	_getch();
	return 0;
}

