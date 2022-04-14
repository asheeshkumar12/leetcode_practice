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
    
    TreeNode* totalNode(TreeNode *root,int val){
        TreeNode *head=new TreeNode(root->val);
        TreeNode *fnode=head;
        head->left=root->left;
        head->right=root->right;
        return head;
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode *head=NULL,*tail=NULL;
        if(root==NULL)
            return NULL;
        if(root->val==val){
          return totalNode(root,val);  
        }
        if(root->val <val){
            return searchBST(root->right,val);
        }
        else
            return searchBST(root->left,val);
        
    }
};
