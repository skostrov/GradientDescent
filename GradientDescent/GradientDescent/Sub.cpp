#include "stdafx.h"
#include "Sub.h"


Sub::Sub(AbstractOperation* leftOperand_, AbstractOperation* rightOperand_) :
BinaryOperation("-", leftOperand_, rightOperand_)
{
}

Sub::~Sub()
{
}

OperationPriority Sub::GetPriority() const
{
	return OperationPriority::LOW;
}

double Sub::Eval(const Point& point) const
{
	return leftOperand->Eval(point) - rightOperand->Eval(point);
}
