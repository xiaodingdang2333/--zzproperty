#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
	string result = "";
	if (strs.empty())                //���ַ�����Ϊ�գ�ֱ�ӷ��ء���
		return result;
	for (int i = 0; i < strs.size(); i++)
	{
		reverse(strs[i].begin(), strs[i].end());
	}
	int i = 0;

	while (i<strs[0].size())      //�õ�һ���ִ��ĳ�������������Ϊ�������Ƿ�Ϊ�������̵Ĵ�������Ӱ����
	{
		char temp = strs[0][i]; //����һ���ִ��ĵ�i���ַ�����temp
		for (int j = 1; j<strs.size(); j++)     //ͨ��j++��������ʣ�µ��ִ��ĵ�i���ַ����бȽ�
		{
			if (strs[j][i] == temp)   //�����j���ִ��ĵ�i���ַ���temp��ȣ����ж���һ���ִ���j+1���ĵ�i ���ַ�
				continue;
			else 						//�������ȣ��򷵻ء���
				reverse(result.begin(), result.end());
				return result;
		}
		result += temp;				//��ÿ����ȵ��ַ�������
		i++;
	}
	reverse(result.begin(), result.end());
	return result;					//����������
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
