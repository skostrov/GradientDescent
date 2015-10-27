#include "stdafx.h"
#include "Cotang.h"


Cotang::Cotang(AbstractOperation* operand_) :
UnaryOperation("Cotg", operand_)
{
}

Cotang::~Cotang()
{
}

double Cotang::Eval(const Point& point) const
{
	double result = operand->Eval(point);

	return cos(result) / sin(result);
}

string Cotang::ToString() const
{
	return "Cotg(" + operand->ToString() + ")";
}
