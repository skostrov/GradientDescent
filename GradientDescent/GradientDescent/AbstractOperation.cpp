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
	}

	return (Eval(point + h) - Eval(point - h)) / (2 * derStep);
}
