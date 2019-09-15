
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
        if ( slow == fast )//第一次相遇
            break;
    }
    slow = slow->next;
    fast = fast->next->next;
    int length = 1;       //环长度
    while ( fast != slow )//再次相遇
    {
        slow = slow->next;
        fast = fast->next->next;
        length ++;        //累加
    }
    return length;
}