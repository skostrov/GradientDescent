#include "stdafx.h"
#include "Constant.h"

const int pres = 0;

Constant::Constant(double value_) :
AbstractOperation(to_string(value_)),
value(value_)
{
}

Constant::~Constant()
{
}

OperationPriority Constant::GetPriority() const
{
	return OperationPriority::HIGH;
}

double Constant::Eval(const Point& point) const
{
	return value;
}

string Constant::ToString() const
{
	stringstream str;

	str << fixed << setprecision(pres) << value;

	if (value >= 0)
	{
		//return to_string(value);
		return str.str();
	}
	else
	{
		//return "(" + to_string(value) + ")";
		return "(" + str.str() + ")";
	}
}
