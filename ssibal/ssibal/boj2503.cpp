#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int q[10] = { 0, };

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	//fill_n(arr, 10, 1);

	int strike, ball, question, cnt = 0;
	string n;
	vector<pair<int, int>> st;
 

	cin >> question;
	while (question--) {
		cin >> n  >> strike >> ball;
		if (strike == 3) { cnt = 1; break; }
		//strike case
		if (strike != 0) {
			for (int i = 0; i < n.length(); i++) {
				auto tmp = make_pair(n[i] - '0', i);
				if (find(st.begin(), st.end(), tmp)::npos) {

				}
			}
		}
	//ball case
		if (ball != 0) {
			for (int i = 0; i < n.length(); i++) {
				q[n[i] - '0']++;
			}
		}
	}


}