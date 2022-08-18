class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> s;
        for(auto x:arr){
            s[x]++;
        }
        priority_queue<int> pq;
        for(auto x:s){
            pq.push(x.second);
        }
        int c=0,sum=0;
        while(!pq.empty()){
            c++;
            sum+=pq.top();
            pq.pop();
            if(sum>=arr.size()/2){
                return c;
            }
        }
        return 0;
        
    }
};
