#include <iostream>

using namespace std;

int student[31]; // 학번은 1부터 시작이라 1개 추가, index 0 안씀

int main()
{
	int n;	// 학생 번호
	int loop = 0;

	while (loop<28) {
		cin >> n;
		if (n >= 1 && n <= 30 && student[n] == 0) {	// 입력받은 n이 1이상 30 이하일때, 그리고 해당 배열에 없을때만
			student[n] = n;	// 해당 인덱스에 같은 값 넣기
			loop++;			// loop + 1
		}
		else cout << "다시 입력하세요.\n";
	}

	for (int i = 1; i <= 30; i++) {		// 배열 30 다 돌면서
		if (student[i] == 0) cout << i << "\n";		// 제출안한 학번 출력
	}

	return 0;
}