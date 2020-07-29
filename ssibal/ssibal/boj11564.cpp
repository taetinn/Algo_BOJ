#include<iostream>
#include<algorithm>
using namespace std;

int main(void) {

	ios::sync_with_stdio(0);
	cin.tie(0);

	long long int a, b, k, schoko = 0;
	cin >> k >> a >> b;

	if (a < 0 && b <= 0) {
		schoko = abs(a) / k + abs(b) / k + 1;
	}
	else if (a >= 0) {
		schoko = (b - a) / k + (a % k == 0 ? 1 : 0);
	}
	else {
		a *= -1;
		schoko = (a + b) / k + 1;
	}
	cout << schoko << '\n';

	return 0;
}