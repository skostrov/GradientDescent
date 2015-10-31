#include "stdafx.h"
#include "AbstractOperation.h"


AbstractOperation::AbstractOperation(const string& name_) : name(name_)
{
}

AbstractOperation::~AbstractOperation()
{
}

double AbstractOperation::NumDerivative(const string& varName, const Point& point) const
{
	Point h;

	for (auto& i : point.GetCoordinates())
	{
		if (i.first == varName)
		{
			h.Insert(varName, derStep);
		}
		else
		{
			h.Insert(i.first, 0.0);
		}
	}

	auto tmp1 = Eval(point + h);
	auto tmp2 = Eval(point - h);
	auto diff = tmp1 - tmp2;

	return diff / (2.0 * derStep);
	//return (Eval(point + h) - Eval(point - h)) / (2 * derStep);
}
