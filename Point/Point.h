#pragma once
#include <iostream>

using namespace std;

class Point {
public:
	Point (double x = 0, double y = 0);
	void write (ostream &rcOutStream) const;
	bool isEqual (const Point &rcPoint) const;

private:
	double mX;
	double mY;
};
