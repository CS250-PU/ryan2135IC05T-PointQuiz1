#include <iostream>
#include "Point.h"
#include "PointSet.h"

// Implementing PointSet.cpp correctly produces the following output:
// Set of Points: {(0, 1) (1, 2) (2, 3) (3, 4) (4, 5) }

using namespace std;

int main () {
	PointSet cPointSet;

	for (int i = 0; i < 5; i++) {
		cPointSet.add (Point (i, i + 1));
	}

	cPointSet.add (Point (1, 2));

	cout << "Set of Points: ";
	cPointSet.write (cout);

	return EXIT_SUCCESS;
}