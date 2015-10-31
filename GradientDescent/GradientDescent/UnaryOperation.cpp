#include "stdafx.h"
#include "UnaryOperation.h"


UnaryOperation::UnaryOperation(const string& name_, AbstractOperation* operand_) :
AbstractOperation(name_),
operand(operand_)
{
}

UnaryOperation::~UnaryOperation()
{
}

OperationPriority UnaryOperation::GetPriority() const
{
	return OperationPriority::HIGH;
}

double UnaryOperation::Eval(const Point& point) const
{
	return operand->Eval(point);
}

string UnaryOperation::ToString() const
{
	return operand->ToString();
}
