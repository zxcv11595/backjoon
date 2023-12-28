#include<iostream>
using namespace std;

int main() {
	int a1, a2, c, n0;
	cin >> a1 >> a2 >> c >> n0;
	
	if (a1 * n0 + a2 <= c* n0 and a1<=c)
		cout << 1;
	else
		cout << 0;
}