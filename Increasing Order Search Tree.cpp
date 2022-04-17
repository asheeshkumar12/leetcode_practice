class Solution {
public:
    TreeNode *head=new TreeNode(0);
    TreeNode  *tail=head;
    TreeNode* increasingBST(TreeNode* root) {
        if(root==NULL){
            return NULL;
        }
        helper(root);
        return tail->right;
        
         
        
    }
   void  helper(TreeNode* root){
        if(root==NULL){
            return;
        }
       helper(root->left);
       head->right=new TreeNode(root->val);
       head=head->right;
       
       helper(root->right);
    }
};
