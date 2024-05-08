#include <iostream>

using namespace std;

long long newmath(long long a, long long b)
{
	return (a + b) * (a - b);
}

int main()
{
	long long a, b;

	while (1) {
		cin >> a >> b;

		if (a >= 1 && b <= 100000)
			break;
		else
			cout << "다시 입력하세요.";
	}

	cout << newmath(a, b);
	
	return 0;
}