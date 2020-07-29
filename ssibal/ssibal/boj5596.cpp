#include<iostream>
#include<algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	
	int S = 0, T = 0, score;

	for (int i = 0; i < 4; i++) {
		cin >> score;
		S += score;
	}
	for (int i = 0; i < 4; i++) {
		cin >> score;
		T += score;
	}

	cout << max(S, T) << '\n';
	return 0;
}