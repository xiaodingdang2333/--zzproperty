
bool IsExistLoop(Node* head)
{
    Node *slow = head, *fast = head;
    while ( fast && fast->next )
    {
        slow = slow->next;
        fast = fast->next->next;
        if ( slow == fast )
            break;
    }
    return !(fast == NULL || fast->next == NULL);
}


int GetLoopLength(Node* head)
{
    Node *slow = head, *fast = head;
 
    while ( fast && fast->next )
    {
        slow = slow->next;
        fast = fast->next->next;
        if ( slow == fast )//��һ������
            break;
    }
    slow = slow->next;
    fast = fast->next->next;
    int length = 1;       //������
    while ( fast != slow )//�ٴ�����
    {
        slow = slow->next;
        fast = fast->next->next;
        length ++;        //�ۼ�
    }
    return length;
}