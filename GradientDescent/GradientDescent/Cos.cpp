#include "stdafx.h"
#include "Cos.h"


Cos::Cos(AbstractOperation* operand_) :
UnaryOperation("Cos", operand_)
{
}

Cos::~Cos()
{
}

double Cos::Eval(const Point& point) const
{
	return cos(operand->Eval(point));
}

string Cos::ToString() const
{
	return "Cos(" + operand->ToString() + ")";
}
