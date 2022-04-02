class Solution {
public:
    bool checkPalimdrome(string s,int i,int j){
        while(i<=j){
            if(s[i]==s[j]){
               i++,j--;
             }
        else{
            return false;
        }
        
    }
        return true;
    }
    bool validPalindrome(string s) {
      
    int i=0,j=s.size()-1;
        while(i<=j){
            if(s[i]==s[j]){
                i++,j--;
            }
            else
            {
               return checkPalimdrome(s,i+1,j)|| checkPalimdrome(s,i,j-1);
            }
        }
        return true;
        
    }
    
};
