// Complete the getNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */SinglyLinkedListNode* reversing(SinglyLinkedListNode* n){
	SinglyLinkedListNode *prev=NULL;
	SinglyLinkedListNode *next=NULL;
	SinglyLinkedListNode *curr=n;
	if(n==NULL){
		return n;
	}
	if(n->next==NULL){
		return n;
	}
	while(curr->next!=NULL){
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	next=curr->next;
	curr->next=prev;
	prev=curr;
	curr=next;
	n=prev;
	return n;
}
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
	SinglyLinkedListNode *n=head;
    n=reversing(n);
    int i=0;
	while(true){
		if(positionFromTail==i){
			return n->data;
		}
		i++;
		n=n->next;
	}

}