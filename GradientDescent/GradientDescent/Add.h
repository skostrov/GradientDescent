#pragma once

#include "BinaryOperation.h"


class Add : public BinaryOperation
{

public:

	Add(AbstractOperation* leftOperand_, AbstractOperation* rightOperand_);
	~Add() override;

	virtual OperationPriority GetPriority() const override;

	double Eval(const Point& point) const override;

};

