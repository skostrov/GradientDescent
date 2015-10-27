#include "stdafx.h"
#include "Variable.h"


Variable::Variable(const string& name_) :
AbstractOperation(name_)
{
}

Variable::~Variable()
{
}

double Variable::Eval(const Point& point) const
{
	auto pos = point.GetCoordinates().find(name);

	if (pos == point.GetCoordinates().end())
	{
		string error = "Identiy " + name + " evaluation failed: index not found!";
		throw exception(error.c_str());
	}

	return pos->second;
}

string Variable::ToString() const
{
	return name;
}
