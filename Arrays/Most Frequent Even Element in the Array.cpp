class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=1)
            {
                m[nums[i]]++;
            }
        }
        pair<int,int> p{-1,-1};
        for(auto x: m){
            if(p.second < x.second){
                p.first=x.first;
                p.second=x.second;
            }
        }
        return p.first;
        
    }
};
