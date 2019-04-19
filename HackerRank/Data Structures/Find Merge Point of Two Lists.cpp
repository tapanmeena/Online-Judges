// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* headA, SinglyLinkedListNode* headB) {
    int c1=0,c2=0;

SinglyLinkedListNode *p=headA,*q=headB;
while(p!=NULL){
    p=p->next;
    c1++;
}
while(q!=NULL){
    q=q->next;
    c2++;
}
if(c2>c1){
    p=headA;
    q=headB;
    for(int i=0;i<(c2-c1);i++){
        q=q->next;
    }
    while(p!=q){
        p=p->next;
        q=q->next;
    }
    return q->data;
}else{
    p=headA;
    q=headB;
    for(int i=0;i<(c1-c2);i++){
        p=p->next;
    }
    while(p!=q){
        p=p->next;
        q=q->next;
    }
    return p->data;
}
}