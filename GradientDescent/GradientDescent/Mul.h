#pragma once

#include "BinaryOperation.h"


class Mul : public BinaryOperation
{

public:

	Mul(AbstractOperation* leftOperand_, AbstractOperation* rightOperand_);
	~Mul() override;

	double Eval(const Point& point) const override;
	string ToString() const override;

};

