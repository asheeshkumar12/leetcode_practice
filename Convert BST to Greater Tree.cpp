class Solution {
    
   private: 
    //  sum changes statically and assgin in the current root value
    void helper(TreeNode* root,int &sum){
        if(root==NULL){
            return;
        }
        if(root->right!=NULL){
            helper(root->right,sum);
        }
        root->val=sum+root->val;
        sum=root->val;
        if(root->left!=NULL){
            helper(root->left,sum);
        }
        
    } 
    public:
    TreeNode* convertBST(TreeNode* root) {
        if(root==NULL) 
            return NULL;
       int sum=0;
       // make helper function for add and updating root->val
     
        helper(root,sum);   // function call 
        return root;
    }
    
    
};
