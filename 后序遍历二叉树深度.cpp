//�ú�������ķ�ʽ������������ÿһ���ڵ㣬�����ýڵ�ǰ��
                             //�Ѿ�����������������������������ƽ��������ֻҪ�ڱ���ʱ����Ͻڵ�߶ȣ�
                            //�����жϸýڵ㵽Ҷ�ӽڵ�������Ƿ���ƽ������
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