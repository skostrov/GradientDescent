#pragma once

#include "AbstractOperation.h"


class BinaryOperation : public AbstractOperation
{

public:

	BinaryOperation(const string& name_, AbstractOperation* leftOperand_, AbstractOperation* rightOperand_);
	virtual ~BinaryOperation() override;

	virtual OperationPriority GetPriority() const override;

	double Eval(const Point& point) const override;

	string ToString() const override;

protected:

	AbstractOperation* leftOperand;
	AbstractOperation* rightOperand;

};

