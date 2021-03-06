#pragma once

#include "UnaryOperation.h"


class NLog : public UnaryOperation
{

public:

	NLog(AbstractOperation* operand_);
	~NLog() override;

	double Eval(const Point& point) const override;
	string ToString() const override;

};

