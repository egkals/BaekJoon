#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);	// c와 c++의 버퍼를 분리 // 이를 사용하면 cin/cout이 더 이상 stdin/stdout과 맞출 필요 x 속도 빨라짐
									// but 버퍼가 분리되었으니 cin,scanf,gets 등을 같이 사용 x
	cin.tie(NULL);					// cin과 cout의 묶음을 풀어줌 // 기본적으로 cin은 읽기전 먼저 출력 버퍼 비움,
									// 온라인에서는 화면에 바로 보여지는 것 중요 x, 입-출력 여러번 반복해야하면 필수!

	int t;
	int a, b;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		cout << a + b << "\n";
	}

	return 0;
}