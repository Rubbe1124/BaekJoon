#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	int arr[100001];
	arr[0] = 0;

	for (int i = 1; i < N+1; i++)
	{
		int input;
		cin >> input;
		arr[i] = arr[i - 1] + input;
	}

	for (int k = 0; k < M; k++)
	{
		int i, j;
		cin >> i >> j;
		cout << arr[j] - arr[i-1]<<"\n";
	}
}