class Solution {
public:
    int triangularSum(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        
     vector<int> newNums;
      for(int i=0;i<nums.size()-1;i++){
          int a=(nums[i]+nums[i+1])%10;
          newNums.push_back(a);
      }
     return triangularSum(newNums);
        
    }
};
