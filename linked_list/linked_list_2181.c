/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *mergeNodes(struct ListNode *head)
{
    int sum = 0;
    struct ListNode *cur;
    struct ListNode *dummy = malloc(sizeof(struct ListNode));
    cur = dummy;
    dummy->next = NULL;
    head = head->next;
    while (head)
    {
        if (head->val == 0)
        {
            struct ListNode *tmp = malloc(sizeof(struct ListNode));
            tmp->val = sum;
            tmp->next = NULL;
            cur->next = tmp;
            cur = tmp;
            sum = 0;
        }
        else
        {
            sum += head->val;
        }
        head = head->next;
    }
    head = dummy->next;
    free(dummy);
    return head;
}