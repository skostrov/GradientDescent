#pragma once

#include "UnaryOperation.h"


class Sin : public UnaryOperation
{

public:

	Sin(AbstractOperation* operand_);
	~Sin();

	double Eval(const Point& point) const override;
	string ToString() const override;

};

