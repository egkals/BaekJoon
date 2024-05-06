#include <iostream>

using namespace std;

int index = 0;	// 배열 인덱스
int n[100];	// a + b 값을 저장할 곳

int main()
{
	int a, b;		// 입력받을 a와 b
	int loop = 1;	// 무한루프 조건


	while (loop) {
		cin >> a >> b;
		if (a > 0 && b < 10)
			n[index++] = a + b;		// a+b 값 저장하고 인덱스 + 1
		else if (a == 0 && b == 0)
			loop = 0;
		else cout << "다시 입력하세요.";
	}

	for (int i = 0; i < index; i++)
		cout << n[i] << "\n";

	return 0;
}