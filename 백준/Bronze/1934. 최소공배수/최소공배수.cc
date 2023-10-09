#include<iostream>
using namespace std;

int main() {
	int n, a, b, value = 1;
	cin >> n;
	for (int i = 0; i < n; i++) {;
		cin >> a >> b;
		for (int j = 1; j <= min(a, b); j++) {
			if (a % j == 0 and b % j == 0)
				value = j;
		}
		cout << a * b / value <<'\n';
	}
}