class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;int r=n-1;
        vector<int> vt{-1,-1};
        bool f=0;
        while(l<=r){
            int m=r+(l-r)/2;
            if(nums[m]==target){
                vt.at(0)=m;
                r=m-1;
            }
           else if(nums[m]<target){
                l=m+1;
                
            }
            else{
                r=m-1;
            }
        }
        l=0,r=n-1;
        while(l<=r){
            int m=r+(l-r)/2;
            if(nums[m]==target){
                vt.at(1)=m;
                l=m+1;
            }
           else if(nums[m]<target){
                l=m+1;
                
                                                                    
        }
   
        return vt;
    }
};
