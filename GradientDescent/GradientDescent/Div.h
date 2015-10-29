#pragma once

#include "BinaryOperation.h"


class Div : public BinaryOperation
{

public:

	Div(AbstractOperation* leftOperand_, AbstractOperation* rightOperand_);
	~Div() override;

	double Eval(const Point& point) const override;
	string ToString() const override;

};

