class Solution {
private:
    bool anagrams(string &s1,string &s2){
        if(s1.size()==s2.size())
        {
                sort(s1.begin(),s1.end());
                sort(s2.begin(),s2.end());
                for(int j=0;j<s1.size();j++){
                    if(s1[j]!=s2[j]){
                        return false;
                    }
                
                }
            return true;
            
        }
        return false;
    }
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> v;
        v.push_back(words[0]);
        for(int i=0;i<words.size()-1;i++){
            string s1=words[i];
            string s2=words[i+1];
            if(anagrams(s1,s2))
             {
                continue;
             }
             v.push_back(words[i+1]);
            }
        return v;
            
        }
        
    
};
