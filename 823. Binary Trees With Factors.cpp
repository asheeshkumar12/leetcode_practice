class Solution {
public:
    int m=pow(10,9)+7;
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        unordered_map<int,long> mp;
        mp[arr[0]]=1;
        for(int i=1;i<arr.size();i++){
            long c=1;
            for(auto x:mp){
                int val=x.first;
                if(arr[i]%val==0&& mp.find(arr[i]/val)!=mp.end()){
                    c+=(mp[val]*mp[arr[i]/val]);
                }
            }
            mp[arr[i]]=c;
        }
        int ans=0;
    for(auto mn:mp){
        ans=(ans+mn.second)%m;
    }
        return ans;
    
    }
};
