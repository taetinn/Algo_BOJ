/*1920-수 찾기(이분탐색)*/
#include<iostream>
#include<algorithm>
using namespace std;
int arr[100001] = { 0, };

bool binarySearch(int target, int len) {
	int st = 0;
	int fin = len - 1;
	while (st <= fin) {
		int mid = (st + fin) / 2;
		if (arr[mid] < target) {
			st = mid + 1;
		}
		else if (arr[mid] > target) {
			fin = mid - 1;
		}
		else 
			return true;
	}
	return false;
}


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M,K;
	bool check = false;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N);
	cin >> M;
	while (M--) {
		cin >> K;
		check = binarySearch(K, N);
		cout << check << '\n';

	}

	return 0;
}