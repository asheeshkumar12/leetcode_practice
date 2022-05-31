class Solution {
public:
    bool hasAllCodes(string s, int k) {
        // int n=(int)(log2(k));
        // string  s1= bitset<64>(k).to_string().substr(64-n-1);
        // if(s.size()>=s1.size()){
        //     return true;
        // }
        // return false;
        int size=s.size();
        unordered_set<string> set;
        for(int i=0;i<=size-k;i++){
            set.insert(s.substr(i,k));
        }
        return set.size()==(1<<k);
        
    }
};
