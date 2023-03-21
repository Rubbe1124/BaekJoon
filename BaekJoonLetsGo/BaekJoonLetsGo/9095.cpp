#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int answer = 0;

void dsf(int order);

int main() {
	int count;
	cin >> count;

	for (int i = 0; i < count; i++) {
		int order;
		cin >> order;

		dsf(order);
		cout << answer<<"\n";
		answer = 0;
	}
}

void dsf(int order) {
	if (order==0) {
		answer++;
		return;
	}
	for (int i = 1; i < 4; i++) {
		if (order - i >= 0) {
			dsf(order - i);
		}
	}

}