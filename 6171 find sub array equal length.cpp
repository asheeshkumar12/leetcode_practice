class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        
        int n=nums.size();
        if(n<=2){
            return false;
        }
        unordered_map<int,int> m;
        int sum=0;
        for(int i=1;i<n;i++){
            int sum2=nums[i-1]+nums[i];
            if(m.count(sum2)>0){
                return true;
            }
            m[sum2]++;
           
        }
        return false;
            
        
    }
};
