#include "stdafx.h"
#include "Add.h"


Add::Add(AbstractOperation* leftOperand_, AbstractOperation* rightOperand_) :
BinaryOperation("+", leftOperand_, rightOperand_)
{
}

Add::~Add()
{
}

OperationPriority Add::GetPriority() const
{
	return OperationPriority::LOW;
}

double Add::Eval(const Point& point) const
{
	return leftOperand->Eval(point) + rightOperand->Eval(point);
}
