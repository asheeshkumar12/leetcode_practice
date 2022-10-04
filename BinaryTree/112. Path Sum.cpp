class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
       if(root==nullptr) 
           return false;
       else if(root->val==targetSum && !root->left && !root->right){
           return true;
       }
        else{
            return hasPathSum(root->left,targetSum-root->val) || hasPathSum(root->right,targetSum-root->val);
        }
        
    }
};
