#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

void lev(int idx);

vector<int> start;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	string arr;
	while (true) {

		int order_num;
		cin >> order_num;
		if (order_num == 0) {
			break;
		}
		else {
			for (int i = 0; i < order_num; i++) {
				int input;
				cin >> input;

				start.push_back(input);
			}
		}
		lev(0);
		cout << "\n";
		start.clear();
	}
}

vector<int> ans;
void lev(int idx) {
	if (ans.size() == 6) {
		for (int i = 0; i < 6; i++) {
			cout << ans[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = idx; i < start.size(); i++) {
		ans.push_back(start[i]);
		lev(i + 1);
		ans.pop_back();
		
	}
}

