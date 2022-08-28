class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& que) {
     sort(nums.begin(),nums.end());
      vector<int> v;
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        for(auto q:que){
            v.push_back(upper_bound(nums.begin(),nums.end(),q)-nums.begin());
        }
           
           
               
        
        
        return v;
    }
};
