/*1463 dfs or dp*/
#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N,cnt=0;
	cin >> N;

	while (N != 1) {
		
		if (N % 3 != 0 && N % 2 != 0) {
			N--;
			cnt++;
		}
		if (N % 2 == 0) {

		}
		else if (N % 3 == 0) {

		}
		
	}
	cout << cnt << '\n';
	return 0;
}