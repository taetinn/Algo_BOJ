#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, tmp=0;
	cin >> a >> b;

	tmp = b - a;

	cout << tmp << ' ' << b << '\n';
	return 0;

}