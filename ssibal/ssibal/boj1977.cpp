#include<iostream>
#include<cmath>
#include<deque>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int m, n;
	int sum = 0, min = 10000;
	double tmp = 0;
	deque<int> d;
	cin >> m >> n;

	for (int i = m; i <= n; i++) {
		tmp = sqrt(i);
		if (tmp - (int)tmp == 0) {
			d.push_back(i);
		}
	}

	if (d.empty()) {
		cout << "-1\n";
	}
	else {
		while (!d.empty()) {
			sum += d.front();
			if (d.front() < min) {
				min = d.front();
			}
			d.pop_front();
		}
		cout << sum << '\n' << min << '\n';
	}


	return 0;
}