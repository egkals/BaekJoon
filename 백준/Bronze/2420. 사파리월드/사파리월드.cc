#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long n, m;				// 2,000,000,000 범위
	int state = 1;

	while (state) {
		cin >> n >> m;
		if (n >= -2 * pow(10, 9) && m <= 2 * pow(10, 9)) state = 0;		// 2,000,000,000 을 지수로 표현해봄
		else cout << "다시 입력해주세요.\n";
	}

	if (n >= m)
		cout << n - m;
	else
		cout << -n + m;
}