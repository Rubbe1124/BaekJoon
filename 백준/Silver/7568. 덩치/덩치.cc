#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int arr1[51] = { 0, };
	int arr2[51] = { 0, };

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;
		arr1[i] = x;
		arr2[i] = y;
	}
	for (int i = 0; i < N; i++) {
		int count = 1;
		for (int j = 0; j < N; j++) {
			if (arr1[i] < arr1[j]) {
				if (arr2[i] < arr2[j]) {
					count++;
				}
			}
		}
		cout << count << " ";
	}
}