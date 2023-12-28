#include<iostream>
#include<vector>
using namespace std;

int main() 
{
	int N, M;
	cin >> N >> M;
	vector<int> v;
	int n, sum = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> n;
		v.push_back(n);
	}
	for (int i = 0; i < N - 2; i++) 
	{
		for (int j = i + 1; j < N - 1; j++) 
		{
			for (int k = j + 1; k < N; k++) 
			{
				if (v[i] + v[j] + v[k] > sum and v[i] + v[j] + v[k] <= M)
				{
					sum = v[i] + v[j] + v[k];
				}
			}
		}
	}
	cout << sum;
}