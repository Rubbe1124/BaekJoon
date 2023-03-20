#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int arr[20][20];
int order;
vector<int> start;

int answer = -1;

void dfs(int level, int last);

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);


	cin >> order;

	for (int i = 0; i < order; i++) {
		for (int j = 0; j < order; j++) {
			int input;
			cin >> input;
			arr[i][j] = input;
		}
	}

	start.push_back(0);
	dfs(0,0);

	cout << answer<<"\n";
}



void dfs(int level, int last) {
	if (level == (order / 2)-1) {
		int temp1 = 0;
		int temp2 = 0;

		vector<int> link;

		for (int i = 0; i < order; i++) {
			if (!binary_search(start.begin(), start.end(), i)) {
				link.push_back(i);
			}
		}

		for (int i = 0; i < start.size(); i++) {
			for (int j = 0; j < start.size(); j++) {
				temp1 += arr[start[i]][start[j]];
			}
		}
		for (int i = 0; i < link.size(); i++) {
			for (int j = 0; j < link.size(); j++) {
				temp2 += arr[link[i]][link[j]];
			}
		}

		int temp_answer = max(temp1 - temp2, temp2 - temp1);
		if (answer == -1) {
			answer= temp_answer;
		}
		else if(temp_answer<answer){
			answer = temp_answer;
		}
		return;
	}
	else {
		for (int i = last+1; i < order; i++) {
			start.push_back(i);
			dfs(level + 1,i);
			start.pop_back();
		}
	}
}