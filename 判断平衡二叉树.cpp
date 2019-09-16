#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
const int maxn = 15000005;
long long hash1[maxn] = { 0 };
typedef struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	
}node[5];
 int TreeDepth(TreeNode *pRoot)
 {
	     if (pRoot == NULL)
	         return 0;
		 int left = TreeDepth(pRoot->left);
	     int right = TreeDepth(pRoot->right);
		 return (left > right) ? (left + 1) : (right + 1);
}
 bool isbalance(TreeNode *pRoot)
 {
	 if (!pRoot)return true;
	 int left = TreeDepth(pRoot->left);
	 int right = TreeDepth(pRoot->right);
	 if (abs(left - right) > 1)return false;
	 return isbalance(pRoot->left) && isbalance(pRoot->right);
 }
int main()
{

	node n1{1,2,3,4,5};

	n1[0].left = &n1[1];
	n1[1].right = &n1[2];
	cout << isbalance(&n1[0]);
	system("pause");
	return 0;
}