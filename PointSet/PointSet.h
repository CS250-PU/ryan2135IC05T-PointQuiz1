#pragma once
#include <iostream>
#include <vector>
#include "Point.h"

using namespace std;

class PointSet {
public:
	PointSet ();
	void write (ostream &rcOutStream) const;
	bool isIn (const Point &rcPoint) const;
	void add (const Point &rcPoint);

private:
	vector<Point> mcPoints;
};