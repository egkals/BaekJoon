#include <iostream>

using namespace std;

long long verifiy(int a, int b, int c, int d, int e)
{
	return (a * a + b * b + c * c + d * d + e * e) % 10;
}

int main()
{
	int a, b, c, d, e;

	while (1) {
		cin >> a >> b >> c >> d >> e;

		if (a, b, c, d, e >= 0 && a, b, c, d, e <= 99999)
			break;
		else
			cout << "다시 입력하세요.";
	}

	cout << verifiy(a, b, c, d, e);

	return 0;
}