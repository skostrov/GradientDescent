#include "stdafx.h"
#include "Point.h"


Point::Point()
{
}

Point::~Point()
{
}

const unordered_map<string, double>& Point::GetCoordinates() const
{
	return coordinates;
}

Point Point::operator+(const Point& rhv) const
{
	Point result;

	for (auto& i : coordinates)
	{
		result.coordinates[i.first] = i.second + rhv.coordinates.at(i.first);
	}

	return result;
}

Point Point::operator-(const Point& rhv) const
{
	Point result;

	for (auto& i : coordinates)
	{
		result.coordinates[i.first] = i.second - rhv.coordinates.at(i.first);
	}

	return result;
}

double Point::operator*(const Point& rhv) const
{
	double result = 0.0;

	for (auto& i : coordinates)
	{
		result += i.second * rhv.coordinates.at(i.first);
	}

	return result;
}

Point Point::operator*(double scalar) const
{
	Point result;

	for (auto& i : coordinates)
	{
		result.coordinates[i.first] = i.second * scalar;
	}

	return result;
}

Point Point::operator/(double scalar) const
{
	Point result;

	for (auto& i : coordinates)
	{
		result.coordinates[i.first] = i.second / scalar;
	}

	return result;
}

void Point::operator+=(const Point& rhv)
{
	for (auto& i : rhv.coordinates)
	{
		coordinates[i.first] += i.second;
	}
}

void Point::operator-=(const Point& rhv)
{
	for (auto& i : rhv.coordinates)
	{
		coordinates[i.first] -= i.second;
	}
}

void Point::operator*=(double scalar)
{
	for (auto& i : coordinates)
	{
		i.second *= scalar;
	}
}

void Point::operator/=(double scalar)
{
	for (auto& i : coordinates)
	{
		i.second /= scalar;
	}
}
