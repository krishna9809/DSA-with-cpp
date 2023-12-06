// Copy

// Illustration
#include <iostream>
using namespace std;

class point {
private:
	double x, y;

public:
	// Non-default Constructor &
	// default Constructor
	point(double px, double py) { x = px, y = py; }
};

int main(void)
{

	// Define an array of size
	// 10 & of type point
	// This line will cause error
	point a[10];

	// Remove above line and program
	// will compile without error
	point b = point(5, 6);
}
