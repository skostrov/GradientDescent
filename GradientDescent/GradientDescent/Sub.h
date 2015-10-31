#pragma once

#include "BinaryOperation.h"


class Sub : public BinaryOperation
{

public:

	Sub(AbstractOperation* leftOperand_, AbstractOperation* rightOperand_);
	~Sub() override;

	virtual OperationPriority GetPriority() const override;

	double Eval(const Point& point) const override;

};

