/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    if(list1 == NULL && list2 ==NULL){
        return NULL;
    }
    struct ListNode head;
    struct ListNode *headp = &head;
    while(list1 != NULL && list2 !=NULL){
        if(list1->val < list2->val){
            headp->next = list1;
            list1 = list1->next;
            headp = headp->next;
        }
        else{
            headp->next = list2;
            list2 = list2->next;
            headp = headp->next;
        }
    }
    if(list1){
        headp->next = list1;
    }
    if(list2){
        headp->next = list2;
    }
    return head.next;
}