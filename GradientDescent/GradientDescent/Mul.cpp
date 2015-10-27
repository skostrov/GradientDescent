#include "stdafx.h"
#include "Mul.h"


Mul::Mul(AbstractOperation* leftOperand_, AbstractOperation* rightOperand_) :
BinaryOperation("*", leftOperand_, rightOperand_)
{
}

Mul::~Mul()
{
}

double Mul::Eval(const Point& point) const
{
	return leftOperand->Eval(point) + rightOperand->Eval(point);
}

string Mul::ToString() const
{
	return leftOperand->ToString() + " + " + rightOperand->ToString();
}
