#include "stdafx.h"
#include "Constant.h"


Constant::Constant(double value_) :
AbstractOperation(to_string(value_)),
value(value_)
{
}

Constant::~Constant()
{
}

double Constant::Eval(const Point& point) const
{
	return value;
}

string Constant::ToString() const
{
	return to_string(value);
}
