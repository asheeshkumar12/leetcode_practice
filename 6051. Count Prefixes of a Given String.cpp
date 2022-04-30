class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        unordered_map<string,int> m;
        for(int i=0;i<s.size();i++){
            m[s.substr(0,i+1)]=1;
        }
        int c=0;
        for(int i=0;i<words.size();i++){
            if(m.count(words[i])>0){
                c++;
            }
        }
        return c;
    }
};
