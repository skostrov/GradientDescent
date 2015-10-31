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

OperationPriority BinaryOperation::GetPriority() const
{
	return OperationPriority::AVERAGE;
}

double BinaryOperation::Eval(const Point& point) const
{
	return leftOperand->Eval(point);
}

string BinaryOperation::ToString() const
{
	string result;

	if (leftOperand->GetPriority() < GetPriority())
	{
		result += "(" + leftOperand->ToString() + ")";
	}
	else
	{
		result += leftOperand->ToString();
	}

	result += " " + name + " ";

	if (rightOperand->GetPriority() < GetPriority())
	{
		result += "(" + rightOperand->ToString() + ")";
	}
	else
	{
		result += rightOperand->ToString();
	}

	return result;
}

