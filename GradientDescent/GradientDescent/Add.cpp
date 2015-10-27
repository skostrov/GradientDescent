#include "stdafx.h"
#include "Add.h"


Add::Add(AbstractOperation* leftOperand_, AbstractOperation* rightOperand_) :
BinaryOperation("+", leftOperand_, rightOperand_)
{
}

Add::~Add()
{
}

double Add::Eval(const Point& point) const
{
	return leftOperand->Eval(point) + rightOperand->Eval(point);
}

string Add::ToString() const
{
	return leftOperand->ToString() + " + " + rightOperand->ToString();
}
