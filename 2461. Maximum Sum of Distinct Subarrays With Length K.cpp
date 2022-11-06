#define ll long long 
#define umii unordered_map<int,int> 
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
          ll i=0; 
        unordered_map<ll,ll>mp; 
        ll sum=0; 
        while(i<k-1){ 
            mp[nums[i]]++; 
            sum+=nums[i]; 
            i++; 
             
        } 
        ll j=0; 
        ll res= LLONG_MIN; 
        while(i<nums.size())
        { 
            mp[nums[i]]++; 
            sum+=nums[i]; 
            if(mp.size()==k){ 
                res= max(res, sum); 
            } 
            sum-=nums[j]; 
            if(mp[nums[j]]==1) mp.erase(nums[j]); 
            else mp[nums[j]]--; 
            j++; 
            i++; 
        } 
        if(res==LLONG_MIN) return 0; 
        return res; 
    }
};
