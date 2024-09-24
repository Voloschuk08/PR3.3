#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double R; // проміжний результат - функціонально стала частина виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	if (x <= -6 - R)
		y = 0;
	if (-6 - R < x && x <= -6)
		y = -sqrt(R*R-pow(x+6,2));
	if (-6 < x && x <= -R)
		y = -R + ((R * (x + 6)) / (- R + 6));
	if (-R < x && x <= 0)
		y = (2 * R / 6) * (x + 6) - R;
	if (0 < x && x <= 3)
		y = R - ((R * x) / 3);
	if (3 < x)
		y = (R * (x - 3)) / 6.0;

	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;

}