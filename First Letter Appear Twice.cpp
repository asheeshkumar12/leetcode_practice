class Solution {
public:
    char repeatedCharacter(string s) {
        // char c;
        // for(int i=0;i<s.size()-1;i++){
        //     if(s[i]==s[i+1]){
        //         c=s[i+1];
        //         break;
        //     }
        // }
        // if(c){
        //      return c;
        // }
       //ort(s.begin(),s.end());
        vector<pair<int,char>>vt;
        for(int i=0;i<s.size()-1;i++)
            {
                for(int j=i+1;j<s.size();j++){
                     if(s[i]==s[j])
                     {
                         pair<int,char> p{j-1,s[i]};
                       vt.push_back(p);
                
                     }
                 }
           
           
            }
        sort(vt.begin(),vt.end());
        
        return vt[0].second;
    }
};
