#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long a, b, c;	// int는 10의 12승까지 저장할 수 없기에 long으로 저장
						//long은 32비트에선 4바이트이기에 안전하게 long long으로 적어도 8비트 적용
	int right = 1;		// 조건에 맞지않으면 상태가 1


	while (right) {	// 조건에 맞지않으면 다시 입력하게 반복
		cin >> a 
			>> b 
			>> c;
		if (a >= 1 && c <= pow(10, 12))		// c++은 지수형태를 pow(밑, 지수) 형식으로 사용함
		{
			right = 0;		// 조건에 맞으면 상태를 0으로
		}
		else
		{
			cout << "다시 입력해주세요\n";
		}
	}
	cout << a + b + c;	// 조건을 만족하면 더한 값 출력
	return 0;
}