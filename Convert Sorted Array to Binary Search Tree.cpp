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
    
    TreeNode* convert(vector<int>&nums,int low,int r){
        
                 if(low>r)
            return NULL;
        
        
            int mid=(low+r)/2;
             int root=nums[mid];
             TreeNode* node=new TreeNode(root);
             node->left=convert(nums,low,mid-1);
            node->right=convert(nums,mid+1,r);
        
            //  node->left=leftSub;
            //  node->right=rightSub;
            // 
        return node;
            
        
    
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return NULL;
        return convert(nums,0,n-1);
        
    }
};
