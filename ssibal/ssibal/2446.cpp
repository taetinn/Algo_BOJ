#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;

	cin >>n;

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < i; k++) {
			cout << " ";
		}
		for (int j =(n-i)*2-1; j > 0; j--) {
			cout << "*";
		}
		cout << '\n';
	}
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < (n - 1) - i; j++) {
			cout << ' ';
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			cout << '*';
		}
		cout << '\n';
	}

	return 0;
}