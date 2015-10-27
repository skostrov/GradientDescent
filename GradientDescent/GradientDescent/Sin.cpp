#include "stdafx.h"
#include "Sin.h"


Sin::Sin(AbstractOperation* operand_) : 
UnaryOperation("Sin", operand_)
{
}

Sin::~Sin()
{
}

double Sin::Eval(const Point& point) const
{
	return sin(operand->Eval(point));
}

string Sin::ToString() const
{
	return "Sin(" + operand->ToString() + ")";
}
