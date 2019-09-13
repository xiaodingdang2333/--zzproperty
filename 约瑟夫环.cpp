#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int i, j, n, m, a[1000], t, len;
	cout << "please input n(总人数) and m(删除的数):";
	cin >> n >> m;
	len = n;
	for (i = 0; i<n; i++)
		a[i] = i ;
	i = 0;
	while (n>1)
	{
		i = (i + m - 1) % n;//计算需要移动的节点 
		t = a[i];
		for (j = i; j<n - 1; j++)//移动i后面的节点 
			a[j] = a[j + 1];
		a[j] = t;// 将i放到新数组的末尾 
		n--;
	}
	reverse(a, a + len);
	cout << "删除序列:" << endl;
	for (i = 0; i<len; i++)
		cout << a[i] << " ";

	return 0;
}
