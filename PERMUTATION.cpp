#include <iostream>
#include<map>
using namespace std;
#include<vector>
#include<string>
void print(char result[], int len)
{
	for (int i = 0; i < len; i++)
		cout << result[i];
	cout << '\n';
}
void subsequence(char input[], int count[], int len, int pos, char result[])
{
	print(result, len);
	for (int i = pos; i < strlen(input); i++)
	{
		if (count[i] == 0)
		{
			continue;
		}
		result[len] = input[i];
		count[i]--;
		subsequence(input, count, len + 1, i, result);
		count[i]++;
	}
}

int main()
{
	string str;
	int i = 0;
	char result[10];
	getline(cin, str);
	vector<string>resultlist;
	map<char, int>countmap;
	std::string::iterator it;
	for (it = str.begin(); it != str.end(); it++)
		countmap[*it]++;
	int count[10];
	char input[10];
	map<char, int>::iterator itr;
	for (itr = countmap.begin(), i = 0; itr != countmap.end(); itr++, i++)
	{
		input[i] = itr->first;
		count[i] = itr->second;
		cout << count[i];
	}
	input[i] = '\0';
	cout << input;
	subsequence(input, count, 0, 0, result);
}