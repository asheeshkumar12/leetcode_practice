class Solution {
public:
    bool backspaceCompare(string s, string t) {
      stack<int> s1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'&&!s1.empty()){
                s1.pop();
                
            }
            else if(s[i]!='#')
            {
                 s1.push(s[i]);
            }
             
            
        }
        stack<int> s2;
         for(int i=0;i<t.size();i++){
            if(t[i]=='#'&& !s2.empty()){
                s2.pop();
                
            }
            else if(t[i]!='#')
            {
                s2.push(t[i]);
            }
            
        }
        string st1,st2;
        while(!s1.empty() ){
            
               st1.push_back(s1.top());
           
                s1.pop();
            
        }
         while(!s2.empty() ){
            
               st2.push_back(s2.top());
           
                s2.pop();
            
        }
        return st1==st2;  
        
    }
};
