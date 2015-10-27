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
	return leftOperand->ToString() + " / " + rightOperand->ToString();
}
