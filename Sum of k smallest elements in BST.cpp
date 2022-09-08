https://practice.geeksforgeeks.org/viewSol.php?subId=9668d7b05ce7f53a09f600d92e6e13d4&pid=705873&user=rohitkumar36
void Inordertraversal(Node* root, int &k, int &s){
    if(root == NULL) return;
    Inordertraversal(root->left, k, s);
    if(k == 0) return;
    s += root->data;
    k--;
    Inordertraversal(root->right, k, s);
}
int sum(Node* root, int k) 
{ 
  
    // Your code here
    int s = 0;
    Inordertraversal(root, k, s);
    return s;
    
} 
