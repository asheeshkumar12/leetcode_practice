class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int low=0,high=0,n=nums.size();
        for(int i=0;i<n;i++){
            low=max(low,nums[i]);
            high+=nums[i];
        }
        int mid=0,ans=0;
        while(low<=high){
            mid=(low+high)/2;
            int count=countSubarr(nums,mid);
            if(count<=m){
                high=mid-1;
                ans=mid;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
    
    int countSubarr(vector<int>&nums,int mid){
        int count=1,temp=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(temp+nums[i]<=mid){
                temp+=nums[i];
            }
            else{
                count++;
                temp=nums[i];
            }
        }
        return count;
    }
};
