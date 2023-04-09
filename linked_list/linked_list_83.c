struct ListNode *deleteDuplicates(struct ListNode *head)
{
    if (!head)
    {
        return head;
    }
    struct ListNode *prev = head;
    struct ListNode *tmp = head->next;
    while (tmp)
    {
        if (prev->val == tmp->val)
        {
            prev->next = tmp->next;
            tmp = tmp->next;
        }
        else
        {
            prev = tmp;
            tmp = tmp->next;
        }
    }
    return head;
}