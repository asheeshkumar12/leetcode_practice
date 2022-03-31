class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size(),t=0,c=0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++) {
            t+=nums[i];
            if(t==k){
                c++;
            }
            if(m.find(t-k)!=m.end()){
                c=m[t-k]+c;
            }
            if(m.find(t)!=m.end()){
                m[t]++;
            }
            else{
                m[t]=1;
            }
        }
        return c;
        
    }
};
