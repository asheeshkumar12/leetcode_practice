class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int> mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<nums[i].size();j++){
                if(mpp.count(nums[i][j])>0){
                    mpp[nums[i][j]]++;
                }
                else{
                    mpp[nums[i][j]]=1;
                }
                
            }
        }
        vector<int> arr;
        for(auto itr=mpp.begin();itr!=mpp.end();itr++){
            if(itr->second==n){
                arr.push_back(itr->first);
            }
        }
        return arr;
        
    }
};
