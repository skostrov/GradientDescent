#pragma once

#include "AbstractOperation.h"

class UnaryOperation : public AbstractOperation
{

public:

	UnaryOperation(const string& name_, AbstractOperation* operand_);
	virtual ~UnaryOperation();

	double Eval(const Point& point) const override;
	string ToString() const override;

protected:

	AbstractOperation* operand;

};

