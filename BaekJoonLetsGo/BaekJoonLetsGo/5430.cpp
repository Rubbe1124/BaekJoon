#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>

using namespace std;

string work(string order, int arr_num);

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int count;
	cin >> count;

	for (int i = 0; i < count; i++) {
		string order;
		cin >> order;

		int arr_num;
		cin >> arr_num;


		

		cout << work(order, arr_num);
	}
}

string work(string order, int arr_num) {
	vector<int> vec;

	stack<int> st;

	string arr;
	cin >> arr;

	string temp = "";

	string ans = "";

	bool flag = true;

	for (int j = 0; j < arr.length(); j++) {
		if (arr_num != 0) {
			if (arr[j] == ',' || arr[j] == ']') {

				vec.push_back(stoi(temp));
				temp = "";
			}
			else if (arr[j] != '[') {
				temp += arr[j];
			}
		}
	}
	for (int j = 0; j < order.length(); j++) {
		if (order[j] == 'R') {
			//reverse(vec.begin(), vec.end());
			flag = !flag;
		}
		else {
			if (vec.size() == 0) {
				ans = "error\n";
				return ans;
			}
			else if(flag){
				vec.erase(vec.begin());
			}
			else if (!flag) {
				vec.erase(vec.end()-1);
			}
		}
	}
	if (!flag) {
		reverse(vec.begin(), vec.end());
	}
	ans += "[";
	for (int i = 0; i < vec.size(); i++) {
		if (i == vec.size() - 1) {
			ans = ans + to_string(vec[i]) + "]\n";
		}
		else {
			ans = ans + to_string(vec[i])+",";
		}
	}
	return ans;
}