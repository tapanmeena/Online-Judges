// Complete the removeDuplicates function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *tmp=head;
	if(tmp==NULL)
		return head;
	while(tmp && tmp->next){
		if(tmp->data==tmp->next->data){
			SinglyLinkedListNode *temp=tmp->next->next;
			free(tmp->next);
			tmp->next=temp;
		}
		else{
			tmp=tmp->next;
		}
	}
	return head;
}