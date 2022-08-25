class Solution {
public:
    bool canConstruct(string r, string m) {
        unordered_map<char,int> s1;
        unordered_map<char,int> s2;
        for(auto x:m){
            s1[x]++;
        }
        for(auto x:r){
            s2[x]++;
        }
        for(int i=0;i<r.length();i++){
            if(s1.find(r[i])==s1.end()) return false;
            if(s2[r[i]]>s1[r[i]]) return false;
        }
        return true;
        
    }
};
