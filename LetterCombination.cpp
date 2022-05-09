class Solution {
    private:
     void func(string digits,vector<string> &ans, string temp,int idx,string sett[]){
         
         //base case
         if(idx>=digits.length()){
             //cout<<temp<<endl;
             ans.push_back(temp);
             return;
         }
         int n=digits[idx]-'0';
         string val=sett[n];
         for(int i=0;i<val.length();i++){
             temp.push_back(val[i]);
              //cout<<temp<<" ";
             func(digits,ans,temp,idx+1,sett);
          //   cout<<temp<<endl;
             temp.pop_back();
             //cout<<temp<<endl;
         }
     }
public:
    
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0){
            return ans;
        }
        string temp;
        int idx=0;
        string sett[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        func(digits,ans,temp,idx,sett);
        return ans;
        
        
    }
};
