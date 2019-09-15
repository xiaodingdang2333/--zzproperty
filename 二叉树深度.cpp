#include <string>
#include <iostream>
#include<vector>
using namespace std;

typedef struct TreeNode {
int val;
struct TreeNode *left;
struct TreeNode *right;
TreeNode(int x) :
val(x), left(NULL), right(NULL) {
}
}trnode;

	int TreeDepth(TreeNode* pRoot)
	{
		if (pRoot == nullptr)
			return 0;
		int left = TreeDepth(pRoot->left);
		int right = TreeDepth(pRoot->right);
		return left>right ? left + 1 : right + 1;
	}


int main()
{
	trnode n1(1);
	trnode n2(3);
	trnode n3(3);
	n1.left = &n2;
	n1.right = &n3;
	cout<<TreeDepth(&n1);
	system("pause");
}
