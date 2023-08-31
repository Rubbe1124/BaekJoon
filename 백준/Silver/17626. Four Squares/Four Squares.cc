#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int arr[50001];
	arr[0] = 0;
	arr[1] = 1;

	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		arr[i] = arr[i - 1] + 1;
		for (int j = 1; j * j <= i; j++)
		{
			arr[i] = min(arr[i], arr[i - j * j] + 1);
		}
	}
	cout << arr[n] << "\n";
}