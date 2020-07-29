#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int day, night, V, cnt = 0, ground = 0, rst=0;
	int st = 0, en = 10e9, mid=0;
	cin >> day >> night >> V;


	while (st<=en) {
		mid = (st + en) / 2;
		cnt = mid * (day - night);
		ground+=
		if (cnt < V) {
			st = mid + 1;
		}
		else if (cnt > V) {
			en = mid - 1;
		}
		else {
			rst = mid;
			break;
		}
	}

	int tmp = (mid - 2) * (day - night) + day;
	if (tmp == V) {
		rst--;
	}

	cout << rst << '\n';

	return 0;
}






//while (ground != V) {
//	ground += day;
//	if (ground == V) {
//		cnt++;
//		break;
//	}
//	ground -= night;
//	cnt++;
//}
//
//cout << cnt << '\n';
//return 0;
