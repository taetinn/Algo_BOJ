#include<iostream>
using namespace std;

int main(void) {

	int arr[10] = { 70,60,55,75,95,90,89,89,85,100 };
	int sum = 0;

	for (int i = 0; i < 10; i++) {
		sum += arr[i];
	}
	sum /= 10;

	cout << sum;
}