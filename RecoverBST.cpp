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
     TreeNode *head=NULL,*tail=NULL,*prev=NULL;
    
    void helper(TreeNode * root){
        if(root==NULL)
            return;
        helper(root->left);
        if(prev!=NULL){
             if(prev->val > root->val){
                 if(head==NULL){
                     head=prev;
                 }
                 tail=root;
             }
            
        }
        prev=root;
        helper(root->right);
        
    }
    void recoverTree(TreeNode* root) {
        if(root==NULL){
            return;
        }
       helper(root);
       swap(head->val,tail->val);
       
        
    }
};
