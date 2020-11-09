// Lab 5.3.cpp
// Михайлов Олександр
// Функції, що містять розгалуження та цикли з рекурентними співвідношеннями
// Варіант 24

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double f(const double x);

int main()
{
	double yfirst, ylast, z;
	int n;

	cout << "yfirst = "; cin >> yfirst;
	cout << "ylast = "; cin >> ylast;
	cout << "n ="; cin >> n;

	cout << fixed;
	cout << "-----------------------" << endl;
	cout << "| " << setw(5) << "y" << "    |";
	cout << setw(5) << "z" << "     |" << endl;
	cout << "-----------------------" << endl;

	double dy = (ylast - yfirst) / n;
	double y = yfirst;

	while (y <= ylast)
	{
		//z = f(1 + sqrt(y) + y) + f(1 + f(1) + f(sqrt(y)) * f(sqrt(y))) * f(1 + f(1) + f(sqrt(y)) * f(sqrt(y)));
		z = f(0);
		cout << "| " << setw(5) << setprecision(1) << y << "    |";
		cout << setw(8) << setprecision(3) << z << "  |" << endl;

		y += dy;
	}

	cout << "-----------------------" << endl;

	cin.get();
	return 0;
}

double f(const double x) {
	if (abs(x) >= 1)
		return sin(x / 2) / (1 + cos(x) * cos(x));
	else {
		double S = 0;
		int i = 0;
		double a = 1;
		S = a;
		do {
			i++;
			double R = x * x;
			a *= R;
			S += a;
		} while (i < 6);
		return S;
	}
}
