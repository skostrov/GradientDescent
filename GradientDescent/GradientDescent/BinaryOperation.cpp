#include "stdafx.h"
#include "BinaryOperation.h"


BinaryOperation::BinaryOperation(const string& name_, AbstractOperation* leftOperand_, AbstractOperation* rightOperand_) :
AbstractOperation(name_),
leftOperand(leftOperand_),
rightOperand(rightOperand_)
{
}

BinaryOperation::~BinaryOperation()
{
}

double BinaryOperation::Eval(const Point& point) const
{
	return leftOperand->Eval(point);
}

string BinaryOperation::ToString() const
{
	return leftOperand->ToString();
}
