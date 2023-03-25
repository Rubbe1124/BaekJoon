#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int arr[1000001] = { 0, };
int check_flag = false;

void goldbalh(int input);

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	arr[0] = 1;
	arr[1] = 1;


	for (int i = 2; i < sqrt(1000001); i++) {
		if (arr[i] == 1) {
			continue;
		}
		else {
			int temp = i;
			int idx = 2;
			while (temp * idx <= 1000000) {
				arr[temp * idx] = 1;
				idx++;
			}
		}
	}

	while (true) {
		int input;
		cin >> input;

		check_flag = false;

		if (input == 0) {
			break;
		}
		goldbalh(input);
		
		if (check_flag == false) {
			cout << "Goldbach's conjecture is wrong." << "\n";
		}
	}
}

void goldbalh(int input) {
	for (int i = input; i >= input / 2; i--) {
		if (arr[i] == 0) {
			if (arr[input - i] == 0 && !check_flag) {
				cout << input << " = " << input - i << " + " << i << "\n";
				check_flag = true;
				return;
			}
		}
	}
}