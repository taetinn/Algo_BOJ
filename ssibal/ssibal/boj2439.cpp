/*boj2439-º° Âï±â2*/
#include<iostream>
using namespace std;


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	int a, b;

	cin >> T;
	for (int i = 1; i <= T; i++) {
		for (int k = 0; k < T - i; k++) {
			cout << ' ';
		}
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << '\n';
	}

	return 0;
}