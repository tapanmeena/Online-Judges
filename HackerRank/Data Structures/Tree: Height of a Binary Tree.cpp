
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        if(!root)
            return -1;
        
        int ldepth=height(root->left);
        int rdepth=height(root->right);
        
        if(ldepth>rdepth)
            return ldepth+1;
        else
            return rdepth+1;   
    }