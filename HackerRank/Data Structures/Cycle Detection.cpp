// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *slow=head;
	SinglyLinkedListNode *fast=head->next;
	if(head==NULL || head->next==NULL)
		return false;
	while(fast){
		if(slow==fast)
			return true;
		else{
			slow=slow->next;
			if(fast->next!=NULL)
				fast=fast->next->next;
			else
				return false;
		}
	}
	return false;

}