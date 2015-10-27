#include "stdafx.h"
#include "Tang.h"


Tang::Tang(AbstractOperation* operand_) :
UnaryOperation("Tg", operand_)
{
}

Tang::~Tang()
{
}

double Tang::Eval(const Point& point) const
{
	return tan(operand->Eval(point));
}

string Tang::ToString() const
{
	return "Tg(" + operand->ToString() + ")";
}
