class Solution {
public:
    bool checkfound(vector<int> &nums,int target,int &i){
        int l=0,r=nums.size()-1;
        while(r>=l){
            int m=l+(r-l)/2;
            if(target==nums[m]){
                i=m;
                return true;
            }
            else if(nums[m]>target){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        i=r+1;
        return false;
    }
    int searchInsert(vector<int>& nums, int target) {
        
        int i=-1;
        if(checkfound(nums,target,i)){
            return i;
        }
        return i;
        
    }
};
