class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index=-1,n=nums.size();
        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                index=i;
                break;
            }
        }
        if(index==-1){
            reverse(nums.begin(),nums.end());
        }
        else{
            int prev=index;
            for(int i=index+1;i<n;i++){
                if(nums[i]> nums[index-1] and nums[i]<=nums[prev]){
                    prev=i;
                }
            }
        swap(nums[index-1],nums[prev]);
            reverse(nums.begin()+index,nums.end());
        }
    }
};
