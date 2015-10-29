#pragma once

#include "UnaryOperation.h"


class Sin : public UnaryOperation
{

public:

	Sin(AbstractOperation* operand_);
	~Sin() override;

	double Eval(const Point& point) const override;
	string ToString() const override;

};

