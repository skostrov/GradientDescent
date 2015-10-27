#pragma once

#include "BinaryOperation.h"


class Add : public BinaryOperation
{

public:

	Add(AbstractOperation* leftOperand_, AbstractOperation* rightOperand_);
	~Add();

	double Eval(const Point& point) const override;
	string ToString() const override;

};

