#include <string>
#include <iostream>
using namespace std;
int main()
{
	//���벻�����ַ�����string

	string a = "";
	char j = getchar();
	do
	{
		a.push_back(j);
	} while ((j = getchar()) != '\n');
	cout << a << endl;
	//ÿ��һ�����뵽string
	string b = "";
	char k;
	do
	{
		cin >> k;
		b.push_back(k);
	} while (getchar() != '\n');
	cout << b;
	system("pause");
}
