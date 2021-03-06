#pragma once

#include "AbstractOperation.h"

class Constant : public AbstractOperation
{

public:

	Constant(double value_);
	~Constant() override;

	OperationPriority GetPriority() const override;

	double Eval(const Point& point) const override;

	string ToString() const override;

private:

	double value;

};

