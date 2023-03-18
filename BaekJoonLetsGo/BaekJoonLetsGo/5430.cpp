#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<deque>

using namespace std;

void work(string order, int arr_num);

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


		

		work(order, arr_num);
	}
}

void work(string order, int arr_num) {
	deque<int> deq;

	string arr;
	cin >> arr;

	string temp = "";

	string ans = "";

	bool flag = true;


	for (int j = 0; j < arr.length(); j++) {
		if (isdigit(arr[j])) {
			temp += arr[j];
		}
		else {
			if (!temp.empty()) {
				deq.push_back(stoi(temp));
				temp = "";
			}
		}
	}
	for (int j = 0; j < order.length(); j++) {
		if (order[j] == 'R') {
			flag = !flag;
		}
		else {
			if (deq.size() == 0) {
				cout<<"error\n";
				return ;
			}
			else if(flag){
				deq.pop_front();
			}
			else if (!flag) {
				deq.pop_back();
			}
		}
	}

	cout<< "[";
	if (flag) {
		if (deq.size()==0) {

		}
		else {
			while (deq.size() != 1) {
				cout<<deq.front() << ",";
				deq.pop_front();
			}
			cout<<deq.front();
			deq.pop_front();
		}

	}
	else {
		if (deq.size() == 0) {

		}
		else {
			while (deq.size() != 1) {
				cout<<deq.back() << ",";
				deq.pop_back();
			}
			cout<<deq.back();
			deq.pop_back();
		}

	}
	cout<< "]\n";


	return;
}