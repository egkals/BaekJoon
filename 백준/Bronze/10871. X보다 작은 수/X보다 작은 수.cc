#include <iostream>

using namespace std;

int a[10000];	// 입력받을 정수들 모을 배열
int b[10000];	// x과 비교해 작은 수들 모을 배열
int b_Index = 0;		// b 배열의 인덱스

int main()
{
	int n, x; // n = 정수 개수, x = 타겟 데이터
	int num; // 배열안에 들어갈 입력받을 값
	int loop = 1; // n과 x의 입력 조건을 만족할때까지 루프

	while (loop) {
		cin >> n >> x;
		if (n >= 1 && x <= 10000) loop = 0;
		else cout << "다시 입력하세요.\n";
	}
	
	a[n];	// 배열 수 n

	for (int i = 0; i < n; i++) {	// n번 반복해 배열에 정수 넣기 
		cin >> num;					
		a[i] = num;					
		if (a[i] < x) b[b_Index++] = a[i];	// 동시에 x와 비교해 작으면 b 배열에 넣기
	}

	for (int i = 0; i < b_Index; i++) {	// x보다 작은수 출력
		cout << b[i] << " ";
	}

	return 0;
}