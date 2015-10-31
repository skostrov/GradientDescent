#pragma once

#include "BinaryOperation.h"


class Power : public BinaryOperation
{

public:

	Power(AbstractOperation* leftOperand_, AbstractOperation* rightOperand_);
	~Power() override;

	OperationPriority GetPriority() const override;

	double Eval(const Point& point) const override;

};

