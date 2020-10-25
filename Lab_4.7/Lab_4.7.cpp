// Lab_4.7.cpp
// Дорожовець Володимир 
// Лабораторна робота № 4.7
// Обчислення суми ряду Тейлора за допомогою ітераційних циклів та рекурентних співвідношень.
// Варіант 0.6 
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

	double xp, xk, x, dx, ln, a = 0, R = 0, S = 0;
	int n = 0;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "ln = "; cin >> ln;

	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "log(1-x)" << " |"
		<< setw(7) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		n = 1;
		a = x;
		S = a;
		do {
			n++;
			R = x * 1.0 * (n * 1.0 - 1) / n * 1.0;
			a *= R;
			S += a;
		} while (abs(a) >= ln);
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << log(1 - x) << " |"
			<< setw(10) << setprecision(5) << -S << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "-------------------------------------------------" << endl;
	return 0;
}