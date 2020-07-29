/*swea2001_ÆÄ¸®ÅðÄ¡*/
#include<iostream>
#include<cstdio>
#pragma warning(disable : 4996)
using namespace std;

int arr[16][16] = { 0, };

int main(void) {

	int T, max = 0, temp = 0;
	int N, M;

   freopen("input.txt", "r", stdin);
	cin >> T;
	for(int t=1;t<=T;t++){
		cin >> N >> M;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cin >> arr[i][j];
			}
		}
		for (int i = 0; i <= N - M; i++) {
			for (int j = 0; j <= N - M; j++) {
				for (int k = 0; k < M; k++) {
					for (int l = 0; l < M; l++) {
						temp += arr[i+k][j+l];
					}
				}
				if (temp >= max) {
					max = temp;
				}
				temp = 0;
			}
		}
		cout << "#" << t << ' ' << max << '\n';
		max = 0;
	}
}