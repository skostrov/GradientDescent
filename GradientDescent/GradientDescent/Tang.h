#pragma once


#include "UnaryOperation.h"

class Tang : public UnaryOperation
{

public:

	Tang(AbstractOperation* operand_);
	~Tang() override;

	double Eval(const Point& point) const override;
	string ToString() const override;
};

