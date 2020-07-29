/*boj1193 분수찾기*/

#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, L_before, L_post, gap = 0, rst1, rst2;
	bool  diagonal_chck = true; // true 가 밑, false가 위

	cin >> n;
	int i = 1;
	while (1) {
		if (n == 1) {
			cout << "1/1\n";
			break;
		}
		L_before = i * (i + 1) / 2;
		L_post = (i + 1) * (i + 2) / 2;

		if (i % 2 != 0) { diagonal_chck = false; }
		else diagonal_chck = true;

		if (n <= L_post && n >= L_before) {
			gap = n - L_before;
			break;
		}
		else { i++; }
	}

	L_post = i + 2;
	if (diagonal_chck) { //밑으로 내려가는 대각선
		int k = 0;
		k += gap;
		rst1 = L_post - k;
		rst2 = k;
	}
	else if (!diagonal_chck) { //위로 올라가는 대각선
		int k = 0;
		k += gap;
		rst1 = k;
		rst2 = L_post - k;
	}

	cout << rst1 << "/" << rst2 << '\n';

	return 0;
}