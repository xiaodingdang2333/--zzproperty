#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int i, j, n, m, a[1000], t, len;
	cout << "please input n(������) and m(ɾ������):";
	cin >> n >> m;
	len = n;
	for (i = 0; i<n; i++)
		a[i] = i ;
	i = 0;
	while (n>1)
	{
		i = (i + m - 1) % n;//������Ҫ�ƶ��Ľڵ� 
		t = a[i];
		for (j = i; j<n - 1; j++)//�ƶ�i����Ľڵ� 
			a[j] = a[j + 1];
		a[j] = t;// ��i�ŵ��������ĩβ 
		n--;
	}
	reverse(a, a + len);
	cout << "ɾ������:" << endl;
	for (i = 0; i<len; i++)
		cout << a[i] << " ";

	return 0;
}
