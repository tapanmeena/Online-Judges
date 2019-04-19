
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/
    void levelOrder(Node * root) {
    if(!root)
        return;
    queue <Node*> q;
    q.push(root);
    while(!q.empty()){
        if(q.front()->left)
            q.push(q.front()->left);
        if(q.front()->right)
            q.push(q.front()->right);

        cout<<q.front()->data<<" ";
        q.pop();

    }        }