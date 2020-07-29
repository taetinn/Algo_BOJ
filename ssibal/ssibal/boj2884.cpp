/*알람시계*/
#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int h, m, tmp=0;
	cin >> h >> m;
	if (m < 45) {
		tmp = 45 - m;
		m = 60 - tmp;
		h--; 
	}
	else {
		m -= 45;
	}

	if (h < 0) { h = 23; }
	cout << h <<' '<< m << '\n';
	return 0;
}