/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
private:  // helper function 
    void helper(TreeNode* &original, TreeNode* &cloned, TreeNode* &target,TreeNode* &h){
        if(original->val==target->val && cloned->val==target->val){
            h=cloned;  // if value mach the target then assign cloned node to h node
            return;  //returned
        }
        if(original->left!=NULL && cloned->left!=NULL){
          helper(original->left,cloned->left,target,h);
        }
        if(original->right!=NULL && cloned->right!=NULL){
          helper(original->right,cloned->right,target,h);
        }
        return;
    }
	publc:  // main function
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
      TreeNode* h=NULL;
        helper(original,cloned,target,h);
            return h;
    }
};
