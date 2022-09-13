//User function Template for C++
Given a Binary Search Tree. Convert a given BST into a Special Max Heap 
with the condition that all the values in the left subtree of a node should be less than all the values in the right subtree of the node.
This condition is applied on all the nodes in the so converted Max Heap.

Example 1:

Input :
                 4
               /   \
              2     6
            /  \   /  \
           1   3  5    7  

Output : 1 2 3 4 5 6 7 
Exaplanation :
               7
             /   \
            3     6
          /   \  /   \
         1    2 4     5
The given BST has been transformed into a
Max Heap and it's postorder traversal is
1 2 3 4 5 6 7.

                 code:
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
