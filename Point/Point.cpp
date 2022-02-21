#include <iostream>
#include "Point.h"

using namespace std;

Point::Point (double x, double y) {
	mX = x;
	mY = y;
}

void Point::write (ostream &rcOutStream) const {
	rcOutStream << "(" << mX << ", " << mY << ")";
}

bool Point::isEqual (const Point &rcPoint) const {
	return mX == rcPoint.mX && mY == rcPoint.mY;
}