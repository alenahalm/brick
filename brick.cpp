#include <iostream>

using namespace std;

int main()
{
	double minb, middle, maxb;
	cout << "Enter a, b, c" << endl;
	cin >> minb >> middle >> maxb;
	double l, m;
	cout << "Enter r and s" << endl;
	cin >> l >> m;
	if (m < l) {
		swap(m, l);
	}
	if (middle > maxb) {
		swap(middle, maxb);
	}
	if (minb > maxb) {
		swap(minb, maxb);
	}
	if (minb > middle) {
		swap(minb, middle);
	}
	if (minb <= l && middle <= m) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	system("pause");
}
void swap(double a, double b) {
	double x = a;
	a = b;
	b = x;
}