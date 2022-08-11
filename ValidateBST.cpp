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
    
    
     bool helper(TreeNode* root, TreeNode* minn, TreeNode* maxx){
        if(root == NULL){
            return true;
        }
        if((minn && root->val <= minn->val) || (maxx && root->val >= maxx->val)){
        
            return false;
        }
        
        return helper(root->left, minn, root)&&helper(root->right, root, maxx);
    }
    
    bool isValidBST(TreeNode* root) {
        return helper(root,nullptr,nullptr);
        
    }
};
