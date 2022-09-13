//User function Template for C++
class Solution{
  public:
      vector<int> v;
    int i = 0;
    void postorder(Node* root){
        if(root == NULL)
            return;
        postorder(root->left);
        postorder(root->right);
        root->data = v[i++];
    }
    void inorder(Node * root){
        if(root == NULL)
            return ;
        inorder(root->left);
        v.push_back(root->data);
        inorder(root->right);
    }
    void convertToMaxHeapUtil(Node* root)

    {
        // Your code goes here
        inorder(root);
        postorder(root);
    }      
};
