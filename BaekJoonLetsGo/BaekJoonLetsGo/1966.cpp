#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int order;
	cin >> order;

	for (int i = 0; i < order; i++) {
		int count;
		int index;
		cin >> count >> index;

		queue<int> que;
		vector<int> vec;
		for (int j = 0; j < count; j++) {
			int temp;
			cin >> temp;
			que.push(temp);
			vec.push_back(temp);
		}
		sort(vec.begin(), vec.end());

		int print = 0;

		while (index != -1) {
			if (que.front() == vec[vec.size() - 1]) {
				que.pop();
				vec.erase(vec.begin()+vec.size()-1);
				index--;
				print++;
			}
			else {
				que.push(que.front());
				que.pop();
				index--;
				if (index == -1) {
					index = que.size()-1;
				}
			}
		}
		cout << print << "\n";
	}
}