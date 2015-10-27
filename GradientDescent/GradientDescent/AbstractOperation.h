#pragma once

#include "headers.h"
#include "Point.h"


class AbstractOperation
{

public:

	AbstractOperation(const string& name_);
	virtual ~AbstractOperation();

	virtual double Eval(const Point& point) const = 0;

	friend ostream& operator << (ostream& os, const AbstractOperation& operation)
	{
		os << operation.ToString();

		return os;
	}

	virtual string ToString() const = 0;

protected:

	string name;

};

