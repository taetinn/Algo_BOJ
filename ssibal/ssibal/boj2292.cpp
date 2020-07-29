/*¹úÁı*/
#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, layer = 0, val = 1;

	cin >> N;

	if (N == 1) {
		layer = 1;
	}

	while (N>val) {

		val += 6 * layer;
		layer++;
	}

	cout << layer << '\n';

	return 0;
}