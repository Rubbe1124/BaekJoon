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

	int N, K;
	cin >> N >> K;

	int temp1 = 1;
	int temp2 = 1;

	for (int i = 1; i <= K; i++) {
		temp1 *= N;
		N--;
	}
	for (int i = 1; i <= K; i++) {
		temp2 *= i;
	}

	cout << temp1 / temp2;
}