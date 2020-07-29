/*boj15739*/
#include<iostream>
using namespace std;
int arr[101][101] ;
bool ck[10001];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, num, spc;
	int sum_col = 0, sum_row = 0, sum_di1 = 0,sum_di2=0;
	bool check = true;
	cin >> N;
	spc = N * (N * N + 1) / 2;
	fill_n(ck, 10001, true);

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> num;
			arr[i][j] = num;
			if (!ck[num]) { //중복 된 수 인지 검사
				check = false;
				break;
			}
			ck[num] = false; // 이제 숫자 못 옴
			sum_row += num; //행
			if (i == j) { //오른쪽으로 가는 대각선
				sum_di1 += num;
			}
			if (i + j == N + 1) { sum_di2 += num; } //왼쪽으로 가는 대각선
		}
		if (sum_row != spc) {
			check = false;
			break;
		}
		sum_row = 0;
	}
	for (int j = 1; j <= N; j++) {
		for (int i = 1; i <= N; i++) {
			sum_col += arr[i][j];
		}
		if (sum_col != spc) {
			check = false;
			break;
		}
		sum_col = 0;
	}
	if (check) { cout << "TRUE\n"; }
	else cout << "FALSE\n";

}