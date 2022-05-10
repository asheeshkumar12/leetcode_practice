class Solution {
    private:
   void helper(int idx,int sum,int n,vector<vector<int>>&arr,vector<int>&temp,int k){
        if(sum==n&&k==0){
            arr.push_back(temp);
            return;
        }
        if(sum>n)
            return;
        for(int i=idx;i<=9;i++){
            if(i>n)
                break;
            temp.push_back(i);
            helper(i+1,sum+i,n,arr,temp,k-1);
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> arr;
        if(k>n)
            return arr;
        vector<int> temp;
        helper(1,0,n,arr,temp,k);
        return arr;
    
    }
};
