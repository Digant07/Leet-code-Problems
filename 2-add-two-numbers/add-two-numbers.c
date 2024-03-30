/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    
    int carry = 0;
    
    struct ListNode dummy = {0, NULL};
    struct ListNode* tail = &dummy; 

    
    while (l1 != NULL || l2 != NULL) {
        
        int x = (l1 != NULL) ? l1->val : 0;
        int y = (l2 != NULL) ? l2->val : 0;
        int sum = x + y + carry;
        carry = sum / 10;
        tail->next = malloc(sizeof(struct ListNode));
        tail = tail->next;
        tail->val = sum % 10;
        tail->next = NULL;
        if (l1 != NULL) l1 = l1->next;
        if (l2 != NULL) l2 = l2->next;
    }
    if (carry > 0) {
        tail->next = malloc(sizeof(struct ListNode));
        tail = tail->next;
        tail->val = carry;
        tail->next = NULL;
    }
    
    return dummy.next;
}
