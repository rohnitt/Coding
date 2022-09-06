/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
        if (!root) return root;
        root->left = pruneTree(root->left);
        root->right = pruneTree(root->right);
        if(!root->left && !root->right && !root->val) 
        {
            
               delete root;
                return NULL;
        }
        return root;
    }
};
// In case you want to free the deleted root to avoid memory leak. You can change the last line to

// if (!root->left && !root->right && !root->val) {
//     // delete will delete the memory of the pointer of root
// 	delete root;
// 	return nullptr;
// } else {
// 	return root;
// }
// Python

// # Definition for a binary tree node.
//         if(root==NULL)
//             return root;
//         TreeNode* l=pruneTree(root->left);
//         TreeNode* r=pruneTree(root->right);
//         //if(!root->left and !root->right and root->val==0) return NULL;
//         if(root->left->val==0 and root->val==1 and root!=NULL)
//             root->left=NULL;
//         if(root->right->val==0 and root->val==1 and root!=NULL)
//             root->right=NULL;
//         return root;
//     }
// };
// // if(root!=NULL){
// //             root->left = pruneTree(root->left);
// //             root->right = pruneTree(root->right);
// //             if(!root->left && !root->right && root->val==0)
// //                 return NULL;
// //         }
// //         return root;