class Solution {
public:
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
    
       unordered_map<int,int>mp;
        for(auto i:nums){
            ++mp[i];
        }
        priority_queue<pair<int,int>> pq;
        for(auto & pair : mp){
           
          pq.emplace(pair.second,pair.first);
        }
        nums.clear();
        
     while(k--){
            nums.push_back(pq.top().second);
           pq.pop();
            
        }
        return nums;
        
        
    }
};
