class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        int ans=1;
        vector<int> arr(n,1);
        for(int i=1;i<n;i++){
            for(int j=i-1;j>=0;j--){
                if(nums[j]<nums[i])
                {
                    arr[i]=max(arr[i],arr[j]+1);
                    ans=max(ans,arr[i]);
                }
            }
        }
        return ans;
    }
};
