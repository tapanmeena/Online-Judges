// Complete the deleteNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    if(head==NULL){
        return head;
    }
    SinglyLinkedListNode *tmp=head;
    if(position==0){
        head=tmp->next;
        free(tmp);
        return head;
    }
    for(int i=1;i<position;i++){
		tmp=tmp->next;
	}
     if (tmp == NULL || tmp->next == NULL)
         return head;
    SinglyLinkedListNode *nt=tmp->next->next;
	free(tmp->next);
	tmp->next=nt;
    return head;
}