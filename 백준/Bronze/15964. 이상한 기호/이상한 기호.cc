#include <iostream>

using namespace std;

int newmath(int a, int b)
{
	return (a + b) * (a - b);
}

int main()
{
	int a, b;

	while (1) {
		cin >> a >> b;

		if (a >= 1 && a <= 1000 && b <= 1000)
			break;
		else
			cout << "다시 입력하세요.";
	}

	cout << newmath(a, b);
	
	return 0;
}