class Solution {
    private:
    string goodString(string s){
        int n=s.size();
        if(n<2){
            return s;
        }
        for(int i=0;i<n-1;i++){
            int p=s[i],q=s[i+1];
            if(abs(p-q)==32){
                return makeGood(s.substr(0,i)+s.substr(i+2));
            }
        }
        return s;
    }
public:
    
    string makeGood(string s) {
        
       return goodString(s);
    }
};
