#include <iostream>

using namespace std;

int main()
{
	int x, y;
	int state = 1;

	while (state) {
		cin >> x 
			>> y;
		if (((x >= -1000 && x <= 1000 )&& x != 0) &&
			((y >= -1000 && y <= 1000) && y != 0)) {
			state = 0;
		}
		else cout << "다시 입력해주세요.";
	}

	if (x > 0 && y > 0) cout << "1";
	else if (x < 0 && y > 0) cout << "2";
	else if (x < 0 && y < 0) cout << "3";
	else if (x > 0 && y < 0) cout << "4";

	return 0;
	}