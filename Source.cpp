#include <iostream>
#include <ctime>
using namespace std;
	//Proc1.������� ������� PowerA3(A), ����������� ������ ������� ����� A � ������������ ��(�������� ������������).� ������� ���� ������� ����� ������ ������� ���� ��������� �����.
	/*double powerA43(double a) {
		double res = a * a * a;
		return res;
	}
	int main() {
		srand(time(nullptr));
		for (int i = 1; i <= 5; i++) {
			double x = rand() % 11;
			double x3 = powerA3(x);
			cout << "x = " << x << " x^3 = " << x3 << endl;
		}
	}*/
	//Proc2.������� 2 ������� powerA2(�), powerA4(A), ����������� ������ � ��������� ������� ����� A � ������������ ��� �������(��������� �������� �������������).
	//� ������� ���� ������� ����� ������ � ��������� ������� ���� ��������� �����
	/*double powerA2(double a) {
		return a * a;
	}
	double powerA4(double a) {
		return powerA2(a) * powerA2(a);
	}
	
	int main() {
		srand(time(nullptr));
		for (int i = 1; i <= 5; i++) {
			double x = rand() % 11;
			double x2 = powerA2(x);
			double x4 = powerA4(x);
			cout << "x = " << x << " x^2 = " << x2 << " x^4 = " << x4 << endl;
		}
	}*/
double powerA2(double a) {
	return a * a;
}
double powerA4(double a) {
	return powerA2(a) * powerA2(a);
}
double powerA3(double a) {
	return a * a * a;
}
double aMean(double x, double y) {
	return (x + y) / 2;
}
double gMean(double x, double y) {
	return sqrt(x * y);
}

int main() {
	srand(time(nullptr));
	for (int i = 1; i <= 10; i++) {
		double x1 = rand() % 100 * 0.1;
		double y1 = rand() % 100 * 0.1;
		double am = aMean(x1, y1);
		double gm = gMean(x1, y1);
		cout << x1 << " " << y1 << " am = " << am << "gm = " << gm << endl;
	}
}

	