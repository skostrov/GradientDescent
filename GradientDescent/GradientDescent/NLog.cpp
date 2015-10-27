#include "stdafx.h"
#include "NLog.h"


NLog::NLog(AbstractOperation* operand_) :
UnaryOperation("Ln", operand_)
{
}

NLog::~NLog()
{
}

double NLog::Eval(const Point& point) const
{
	return log(operand->Eval(point));
}

string NLog::ToString() const
{
	return "Ln(" + operand->ToString() + ")";
}
