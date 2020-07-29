///*boj11561+Â¡°Ë´Ù¸®*/
//#include<iostream>
//#include<cmath>
//using namespace std;
//
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int T, jump = 1;
//	long long int N, calc = 0;
//	long long int st, en, mid;
//	
//
//	cin >> T;
//	while (T--) {
//		cin >> N;
//		st = 0;
//		en = sqrt(N + 1) * 2;	
//		while (st <=en) {
//			mid = (st + en)/2;
//			calc = mid * (mid + 1) ;
//			if (calc < 2 * N) {
//				st = mid + 1;
//			}
//			else if (calc > 2 * N) {
//				en = mid - 1;
//			}
//			else
//				jump = mid;
//		}
//		
//		cout << jump  << '\n';
//
//	}
//
//	return 0;
//}

#include <cstdio>
#include <cmath>
#pragma warning (disable:4996)
using namespace std;

long long N;

bool jump(long long least) {
	return (least * (least + 1) / 2 <= N);
}

int main() {
	int T;
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		scanf("%lld", &N);
		long long lo = 1, hi = sqrt(N + 1) * 2;
		while (lo + 1 < hi) {
			long long mid = (lo + hi) / 2;
			if (jump(mid)) lo = mid;
			else hi = mid;
		}
		printf("%lld\n", lo);
	}
}