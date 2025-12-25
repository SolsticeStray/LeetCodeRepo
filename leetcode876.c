/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *ptrF = head;struct ListNode *ptrS = head;
    while (ptrF->next != NULL){
        ptrF = ptrF->next;
        ptrS = ptrS->next;
        if (ptrF->next != NULL) ptrF = ptrF->next;
		else break;
    }
    return ptrS;
}
