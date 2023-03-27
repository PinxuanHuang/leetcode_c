/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head){
    struct ListNode *ans = head;
    int idx = 0, cnt = 1;
    while(head){
        idx += 1;
        head = head->next;
    }
    while(cnt < (idx/2+1)){
        cnt += 1;
        ans = ans->next;
    }
    return ans;
}