class Solution {
public:
    int minGroups(vector<vector<int>>&gaps) {
       sort(gaps.begin(),gaps.end());
        priority_queue<int,vector<int>,greater<>> pq;
        int ans=0;
        for(int i=0;i<gaps.size();i++){
            int bb=gaps[i][0];
            int ee=gaps[i][1];
            if(!pq.empty() && pq.top()>bb){
                ans++;
            }
            else if(!pq.empty()){
                pq.pop();
            }
            pq.push(ee+1);
        }
        return ans+1;
        
    }
};
