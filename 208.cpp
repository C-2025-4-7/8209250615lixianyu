#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a;
	double x_prev = a;
	double x_curr;
	const double eps = 1e-5;
	do {
		x_curr = 0.5 * (x_prev + a / x_prev);
		if (fabs(x_curr - x_prev) < eps) {
			break;
		}
		x_prev = x_curr;
	} while (true);
	cout << "Square root: " << x_curr << endl;
	return 0;
}