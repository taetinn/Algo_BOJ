#include<iostream>
#include<stack>
using namespace std;

int getReverse(int n) {
	
	int tmp = 0, mul=1, rst=0;
	stack<int> st;

	while (n!=0) {
		st.push(n % 10);
		n /= 10;
	}
	while (!st.empty()) {
		tmp = st.top();
		rst += tmp * mul;
		mul *= 10;
		st.pop();
	}

	return rst;
}

int main(void) {
	int n1, n2,rst;

	cin >> n1 >> n2;

	rst = getReverse(getReverse(n1) + getReverse(n2));

	cout << rst << '\n';

	return 0;


}