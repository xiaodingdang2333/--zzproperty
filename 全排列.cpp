#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void permutation(vector<string>&result, string &str, int index, int len)
{
	if (index == len)result.push_back(str);
	for (int i = index; i < len; i++)
	{
		if (i != index&&str[i] == str[index])continue;
		swap(str[i], str[index]);
		permutation(result, str, index + 1, len);
	}
}
int main()
{
	string s = "123";
	vector<string> res;

	permutation(res, s, 0, s.length());
	for (auto i : res)cout << i << endl;
	system("pause");
	return 0;
}
