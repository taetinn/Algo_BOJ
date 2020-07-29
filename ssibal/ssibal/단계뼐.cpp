#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N, G1, G2 = 0,cnt=0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> G1;
		if (G2 == 0 && G1 == 2) {
			cnt++;
		}
		G2 = G1;
	}
}