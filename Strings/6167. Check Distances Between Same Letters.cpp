class Solution {
public:

    bool checkDistances(string s, vector<int>& distance) {
        unordered_map<char,int> m,m1;
        for(int i=0;i<s.size();i++){
            if(m.count(s[i])>0){
                m1[s[i]]=i;
            }
            else{
                m[s[i]]=i;
            }
            
            
        }
        unordered_map<char,int> let;
        string ab="abcdefghijklmnopqrstuvwxyz";
        for(int i=0;i<26;i++){
            let[ab[i]]=i;
        }
        unordered_map<char,int> visit;
        for(int i=0;i<s.size();i++){
            if(visit.count(s[i])>0){
                continue;
            }
            visit[s[i]]=i;
            int t=m1[s[i]]-m[s[i]];
            int idx=let[s[i]];
            if((t-1)!=(distance.at(idx))){
                return false;
            }
           
            
        }
        return true;
        
        
    }
};
