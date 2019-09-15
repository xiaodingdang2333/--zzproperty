#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
	string result = "";
	if (strs.empty())                //该字符数组为空，直接返回“”
		return result;
	for (int i = 0; i < strs.size(); i++)
	{
		reverse(strs[i].begin(), strs[i].end());
	}
	int i = 0;

	while (i<strs[0].size())      //用第一个字串的长度来操作，因为无论他是否为最长还是最短的串，都不影响结果
	{
		char temp = strs[0][i]; //将第一个字串的第i个字符赋给temp
		for (int j = 1; j<strs.size(); j++)     //通过j++来进行与剩下的字串的第i个字符进行比较
		{
			if (strs[j][i] == temp)   //如果第j个字串的第i个字符与temp相等，则判断下一个字串（j+1）的第i 个字符
				continue;
			else 						//如果不相等，则返回“”
				reverse(result.begin(), result.end());
				return result;
		}
		result += temp;				//将每次相等的字符加起来
		i++;
	}
	reverse(result.begin(), result.end());
	return result;					//返回输出结果
}

int main()
{
	ifstream fin;
	vector<string>a;
	fin.open("F:\\shuati\\--zzproperty\\123.txt");
	string s;

	while (fin >> s)a.push_back(s);
	cout << longestCommonPrefix(a);
	system("pause");
	return 0;
}
