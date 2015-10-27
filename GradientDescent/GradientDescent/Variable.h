#pragma once

#include "AbstractOperation.h"

class Variable : public AbstractOperation
{

public:

	Variable(const string& name_);
	~Variable();

	double Eval(const Point& point) const override;
	string ToString() const override;
};

