bool hasCycle(struct ListNode *head)
{
    if (!head)
    {
        return false;
    }
    struct ListNode *slow, *fast;
    slow = head;
    fast = head->next;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            return true;
        }
    }

    return false;
}