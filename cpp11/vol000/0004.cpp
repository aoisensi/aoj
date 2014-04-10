#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	double a, b, c, d, e, f, x, y, t;
	while(cin >> a >> b >> c >> d >> e >> f) {
		t = 1.0 / (a*e - b*d);
		x = (e*c - b*f) * t;
		y = (a*f - d*c) * t;
		x = abs(x) < 0.001 ? 0.0 : x;
		y = abs(y) < 0.001 ? 0.0 : y;
		cout << fixed << setprecision(3) << x
			 << ' '
			 << fixed << setprecision(3) << y
			 << endl;
	}
	return 0;
}
