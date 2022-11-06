class Solution {
public:
    string orderlyQueue(string s, int k) {
        
        if(k>1){
            sort(s.begin(),s.end());
            return s;
            
        }
        int n=s.size();
        string newString=s+s;
        string ans=s;
        for(int i=1;i<n;i++){
            string temp=newString.substr(i,n);
            if(temp<ans){
                ans=temp;
            }
        }
        return ans;
    }
};
