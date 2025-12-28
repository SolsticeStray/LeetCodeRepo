struct Node *deleteDuplicates(struct Node *head){
	
	if(head == NULL) return NULL;
	if(head->next == NULL) return head;
	
	struct Node *p = head;
	
	while(p->next != NULL){
		
		if(p->data == p->next->data){
			p->next = p->next->next;	
		}else{
			p = p->next;
		}
	}
	
	return head;
}
