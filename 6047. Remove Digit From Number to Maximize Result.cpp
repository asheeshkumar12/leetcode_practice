class Solution {
public:
    string removeDigit(string number, char digit) {
         string s=number;
        int n=s.size();

        string res;
        for(int i=n-1;i>=0;i--){
            if(s[i]==digit){
                res=max(s.substr(0,i)+s.substr(i+1),res);
            
            }
        }
        
       return res;
        
    }
};
