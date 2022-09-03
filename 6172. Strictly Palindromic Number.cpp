class Solution {
public:
    string dtoBinary(int b,int n){
        string sum="";
        while(n!=0){
            int rem=n%b;
            sum+=to_string(rem);
            n=n/b;
        }
        return sum;
    }
    bool checkpalindrome(string s){
        //string str;
        //strcpy(str,s);
        int i=0;int j=s.size();
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
        }
        return true;
    }
    
    bool isStrictlyPalindromic(int n) {
        int i=2;
        while(i<n-1){
            string str=dtoBinary(i,n);
            if(checkpalindrome(str)){
                continue;
            }
            break;
        }
        return false;
        
    }
};
