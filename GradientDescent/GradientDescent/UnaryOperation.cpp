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

double UnaryOperation::Eval(const Point& point) const
{
	return operand->Eval(point);
}

string UnaryOperation::ToString() const
{
	return operand->ToString();
}
