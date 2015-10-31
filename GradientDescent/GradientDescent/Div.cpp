#include "stdafx.h"
#include "Div.h"


Div::Div(AbstractOperation* leftOperand_, AbstractOperation* rightOperand_) :
BinaryOperation("/", leftOperand_, rightOperand_)
{
}

Div::~Div()
{
}

double Div::Eval(const Point& point) const
{
	return leftOperand->Eval(point) / rightOperand->Eval(point);
}

string Div::ToString() const
{
	string result;

	if (leftOperand->GetPriority() <= GetPriority())
	{
		result += "(" + leftOperand->ToString() + ")";
	}
	else
	{
		result += leftOperand->ToString();
	}

	result += " " + name + " ";

	if (rightOperand->GetPriority() <= GetPriority())
	{
		result += "(" + rightOperand->ToString() + ")";
	}
	else
	{
		result += rightOperand->ToString();
	}

	return result;
}
