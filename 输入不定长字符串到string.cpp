#include <string>
#include <iostream>
using namespace std;
int main()
{
	//输入不定长字符串到string

	string a = "";
	char j = getchar();
	do
	{
		a.push_back(j);
	} while ((j = getchar()) != '\n');
	cout << a << endl;
	//每隔一个输入到string
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
