#pragma once

#include "headers.h"
#include "Point.h"
#include "PrecisionConstants.h"


enum OperationPriority
{
	LOW = 1,
	AVERAGE,
	HIGH,
};

class AbstractOperation
{

public:

	AbstractOperation(const string& name_);
	virtual ~AbstractOperation();

	virtual OperationPriority GetPriority() const = 0;

	virtual double Eval(const Point& point) const = 0;
	virtual double NumDerivative(const string& varName, const Point& point) const;

	friend ostream& operator << (ostream& os, const AbstractOperation& operation)
	{
		os << operation.ToString();

		return os;
	}

	virtual string ToString() const = 0;

protected:

	string name;

};

