#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
const int maxn = 10000;
int main()
{
	int n;
	int a[maxn];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		a[i] = tmp;
	}
	sort(a, a + n);
	int sum1;
	cin >> sum1;
	int m1 = 0, m2 = 1, m3 = 2;
	sum2 = a[m1] + a[m2] + a[m3];
	int count = 0;
	for (int i = 0; i < n-2; i++)
	{
		for (int j = i+1; j < n-1; j++)
		{
			for (int c = j+1; c < n; c++)
			{
				sum2 = a[i] + a[j] + a[c];
				if (sum2 < sum1)count++;
			}
		}
	}
	cout << count;
	system("pause");
	return 0;
}
