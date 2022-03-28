class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1;
        while(l<=h) {
            
            int mid=l+(h-l)/2;
            if(nums[mid]==target){
                return true;
            }
            //if duplicate value present in the array
            if(nums[l]==nums[mid] && nums[h]==nums[mid]){
                l++,h--;
                
            }
            // first half calculation 
            else if(nums[l]<=nums[mid]) {
                if(nums[l]<=target && nums[mid]>target) {
                    h=mid-1;
                }else{
                    l=mid+1;
                }
            }
            //second half array
            else {
                if(nums[mid]<target && nums[h]>=target) {
                    l=mid+1;
                }else{
                    h=mid-1;
                }
            }
        }
        
        return false;
        
    }
};
