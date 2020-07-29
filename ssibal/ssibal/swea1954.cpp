/*swea1954_달팽이 숫자*/
#include<iostream>
using namespace std;
int arr[11][11] = { 0, };

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N,T;
	int n = 1;

	cin >> T;
	for (int t = 0; t < T; t++) {
		cin >> N;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (i == 1) {
					arr[i][j] = n;	
				}

				n++;
			}
		}
	}

	return 0;
}