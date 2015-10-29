#pragma once


#include "UnaryOperation.h"

class Cotang : public UnaryOperation
{

public:

	Cotang(AbstractOperation* operand_);
	~Cotang() override;

	double Eval(const Point& point) const override;
	string ToString() const override;

};

