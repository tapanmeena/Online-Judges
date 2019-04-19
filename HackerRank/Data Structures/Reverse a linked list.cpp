// Complete the reverse function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *prev=NULL;
	SinglyLinkedListNode *next=NULL;
	SinglyLinkedListNode *curr=head;
    if(head==NULL)
        return head;
    if(head->next==NULL)
        return head;
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
	
	head=prev;
    return head;
}