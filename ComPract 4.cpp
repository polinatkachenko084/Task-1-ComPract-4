#include <windows.h>
#include <iostream>
#include <cmath>
	using namespace std;

	int main() {

		SetConsoleOutputCP(1251);
		SetConsoleCP(1251);

		double a, e = 0.00001;
		double xn, x2n, x0;

		cout << "Введіть a:";
		cin >> a;

		if (a <= 0) {
			cout << "a повинна бути більше 0" << endl;
		}

		x0 = a / 2;
		xn = x0; // X0 попереднє наближення

		while (true) {
			x2n = 0.5 * (xn + a / xn);       // xₙ₊₁
			if (fabs(x2n - xn) < e) break;   // |xₙ₊₁ − xₙ| < e
			xn = x2n; // x2n наступне наближення
		}

		cout << "sqrt(a) = " << x2n << endl;
	}



