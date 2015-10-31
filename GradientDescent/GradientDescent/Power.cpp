#include "stdafx.h"
#include "Power.h"


Power::Power(AbstractOperation* leftOperand_, AbstractOperation* rightOperand_) :
BinaryOperation("^", leftOperand_, rightOperand_)
{
}

Power::~Power()
{
}

OperationPriority Power::GetPriority() const
{
	return OperationPriority::HIGH;
}

double Power::Eval(const Point& point) const
{
	return pow(leftOperand->Eval(point), rightOperand->Eval(point));
}
