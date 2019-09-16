//用后序遍历的方式遍历二叉树的每一个节点，遍历该节点前，
                             //已经遍历了其左右树（左右子树都是平衡树），只要在遍历时候带上节点高度，
                            //就能判断该节点到叶子节点的子树是否是平衡树。
bool IsBalanced(TreeNode pRoot, int& high)
{
	if (pRoot == nullptr)
	{
		high = 0;
		return true;
	}

	int left, right;
	if (IsBalanced(pRoot-left, left) && IsBalanced(pRoot-right, right))
	{
		int sub = abs(left - right);
		if (sub2)
		{
			high = 1 + (leftright  left  right);
			return true;
		}
	}
	return false;
}