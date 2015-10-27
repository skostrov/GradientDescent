#pragma once

#include "UnaryOperation.h"


class Cos : public UnaryOperation
{

public:

	Cos(AbstractOperation* operand_);
	~Cos();

	double Eval(const Point& point) const override;
	string ToString() const override;

};

