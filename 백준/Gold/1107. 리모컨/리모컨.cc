#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

bool check_temp_num(int temp_num);

char check[10];

int N;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	for (int i = 0; i < 10; i++)
	{
		check[i] = '0';
	}

	cin >> N;

	int count;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		int input;
		cin >> input;
		check[input] = '1';
	}

	int answer = abs(100 - N);

	for (int i = N; i >= 0; i--)
	{
		if (check_temp_num(i))
		{
			int temp = to_string(i).length() + abs(i - N);
			if (temp < answer)
				answer = temp;
			break;
		}
	}

	for (int i = N+1; i <= 999999; i++)
	{
		if (check_temp_num(i))
		{
			int temp = to_string(i).length() + abs(i - N);
			if (temp < answer)
				answer = temp;
			break;
		}
	}
	cout << answer << "\n";
}

bool check_temp_num(int temp_num)
{
	string temp = to_string(temp_num);
	for (int i = 0; i < temp.length(); i++)
	{
		if (check[temp[i]-'0'] != '0')
		{
			return false;
		}
	}
	return true;
}