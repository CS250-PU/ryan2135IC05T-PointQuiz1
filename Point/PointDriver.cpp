#include <iostream>
#include "Point.h"

using namespace std;

int main () {
	Point cP1 (1.0, 2.0), cP2 (3.5, 4.0);

	cP1.write (cout);
	cout << endl;
	cP2.write (cout);
	cout << endl;

	return EXIT_SUCCESS;
}