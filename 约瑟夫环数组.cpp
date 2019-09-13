#include<iostream>
using namespace std;
int main()
{
	int a[1000], b[1000], n = 5, m = 2, i, k = 0, j = 0;
	for (i = 0; i<n; i++)
		a[i] = i + 1;
	while (j != n)
	{
		for (i = 0; i<n; i++)
		{
			if (a[i] == 0) continue;//把杀掉的置位0  以后遇到0就跳过
			k++;
			if (k != m) continue;
			k = 0;
			b[j++] = a[i];
			a[i] = 0;
		}
	}
	for (i = 0; i<n; i++)
		cout << b[i] << " ";
	return 0;
}
