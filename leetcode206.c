struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL) return NULL;

    struct ListNode *curr = head;
    struct ListNode *prev = NULL;

    while(curr != NULL){
        struct ListNode *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
