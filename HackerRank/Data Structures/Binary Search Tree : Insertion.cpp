/* you only have to complete the function given below.  
Node is defined as  

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



    Node * insert(Node * root, int data) {
        if(!root){
        return new Node(data);
    }
    //Node* curr;
    if(root->data>data){
        root->left=insert(root->left,data);
    }
    else{
        root->right=insert(root->right,data);
    }
    //levelOrder(root);

    return root;

    }