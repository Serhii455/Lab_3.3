#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double R;
	double y;


	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	if (x <= R && x <= -3 ) {
		y = -((x + 4) / (R + 4));
	}
	else {
		if (R < x || -3 < x && x <= 0) {
			//y = sqrt(pow(R, 2) - pow(x, 2));
			y = pow((pow(R, 2) - pow(x, 2)), 2);
		}
		else {
			if (0 < x && x <= 6) {
				y = ((6 * R) - (6 * R * x)) / 6;
			}
			else {
				y = x - 6;
			}
		}
	}


	cout << endl;
	cout << "y = " << y << endl;


	cin.get();
	return 0;
}