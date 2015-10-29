#pragma once

#include "headers.h"

class Point
{

public:

	Point();
	~Point();

	const unordered_map<string, double>& GetCoordinates() const;

	void Insert(const string& varName, double value);

	Point operator+(const Point& rhv) const;
	Point operator-(const Point& rhv) const;
	double operator*(const Point& rhv) const;

	Point operator*(double scalar) const;
	Point operator/(double scalar) const;

	void operator+=(const Point& rhv);
	void operator-=(const Point& rhv);
	void operator*=(double scalar);
	void operator/=(double scalar);

private:

	unordered_map<string, double> coordinates;

};

