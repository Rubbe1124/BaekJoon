#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int arr[1001];
	arr[1] = 1;
	arr[2] = 3;

	int n;
	cin >> n;
	for (int i = 3; i < n+1; i++)
	{
		arr[i] = arr[i - 1] + 2*arr[i - 2];
		arr[i] = arr[i] % 10007;
	}

	cout << arr[n]%10007 << "\n";
}