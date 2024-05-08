#include <iostream>

using namespace std;

int A[100][100];
int B[100][100];

int main()
{
	int n, m;
	int a, b;	// 행렬 A와 B의 원소값들

	while (1) {
		cin >> n >> m;
		if (n <= 100 && m <= 100)
			break;
		else cout << "다시 입력해주세요.";
	}

	for (int i = 0; i < n; i++) {	// 행렬 크기 n
		for (int j = 0; j < m; j++) { // 행렬의 원소 m개
			cin >> a;
			A[i][j] = a;
		}
	 }

	for (int i = 0; i < n; i++) {	// 행렬 크기 n
		for (int j = 0; j < m; j++) { // 행렬의 원소 m개
			cin >> b;
			B[i][j] = b;
		}
	}

	for (int i = 0; i < n; i++) {	// 행렬 크기 n
		for (int j = 0; j < m; j++) { // 행렬의 원소 m개
			cout << A[i][j] + B[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}