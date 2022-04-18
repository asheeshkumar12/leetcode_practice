class Solution {
public:
    
      priority_queue<int> pq;
    void helper(TreeNode *root,int k){
        if(root==NULL){
            return;
        }
        if(root->left!=NULL)
            helper(root->left,k);
         if(pq.size()==k+1){
             pq.pop();
         }
        pq.push(root->val);
        if(root->right!=NULL)
           helper(root->right,k);
        
    }
    int kthSmallest(TreeNode* root, int k) {
      
        helper(root,k);
        // for(int i=0;i<k-1;i++){
        //     pq.pop();
        // }
        if(pq.size()>k)
        {
             pq.pop();
        }
        return pq.top();
        
    }
};
