#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int answer = 0;

void func(int k, int n);

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int k, n;
		cin >> k >> n;
		answer = 0;
		func(k, n);
		cout<< answer <<"\n";
	}
}

void func(int k,int n) {
	if (k == 0) {
		answer+= n;
		return;
	}
	for (int i = 1; i < n+1; i++) {
		func(k - 1, i);
	}
}