class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        long mod=1e9+7;
       
        int n = arr.size();
        
        unordered_map<int, int> mp;
        
        int count = 0;
        
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                int need = target - arr[i] - arr[j];
                
                count += mp[need];
            }
            
            count %= mod;
            
            mp[arr[i]]++;
        }
        
       return count%mod;
    }
};
