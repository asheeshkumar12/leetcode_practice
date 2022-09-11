class Solution {
public:
    int partitionString(string s) {
        set<char> stt;
        int ans=0;
        for(char c:s){
            if(stt.count(c)){
                stt.clear();
                ans++;
            }
            stt.insert(c);
        }
        
        return  ans+1;
        
    }
};
