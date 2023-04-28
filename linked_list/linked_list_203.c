/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val){
    if(head == NULL){
        return NULL;
    }
    int flag = 0;
    struct ListNode *cur, *dummy;
    dummy = malloc(sizeof(struct ListNode));
    dummy->next = head;
    cur = dummy;
    while(head){
        if(head->val == val){
            cur->next = head->next;
            head = head->next;
        }
        else{
            cur = head;
            head = head->next;
        }
    }
    head = dummy->next;
    free(dummy);
    return head;
}