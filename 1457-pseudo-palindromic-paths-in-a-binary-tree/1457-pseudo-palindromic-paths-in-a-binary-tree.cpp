
class Solution {
public:
int count =0;
//vector<int> digits{0,0,0,0,0,0,0,0,0,0}; //for counting the frequency
    void pseudo_count1(TreeNode* root,vector<int>&digits,int& count)
{
    if(root==NULL)
    {
        return;
    }
    digits[root->val]++;
    pseudo_count1(root->left,digits,count);
    pseudo_count1(root->right,digits,count);
    
    if(root->left==NULL && root->right==NULL)
    {
        int odd_count =0;
        for(int i=0;i<10;i++)
        {
            if(digits[i]%2!=0)
            {
                odd_count++; //counting the odd digits
            }
        }
        if(odd_count==0 || odd_count==1)
        {
            count++;
        }
    }
    digits[root->val]--;
    
}
int pseudoPalindromicPaths(TreeNode* root){
    vector<int> digits(10, 0);
    pseudo_count1(root,digits,count);
     return count;
    
}
};