
class Solution {
public:
    string digitSum(string s, int k) {
        

        string str1="";
        while(true){
            if(s.size()<=k)
            {
                return s;
            }
           int sum=0;
           for(int i=0;i<s.size();i++){
             
             if(i!=0 && i%k==0)
              {
                str1+=to_string(sum);
                 sum=0;
                
              }
               
               sum+=s[i]-'0';
           }
            str1+=to_string(sum);
            s=str1;
            str1="";
            
            
        }
    
        
    }
};
