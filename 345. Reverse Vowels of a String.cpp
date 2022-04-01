class Solution {
public:
    string reverseVowels(string s) {
        unordered_map<char,int> m;
        m['a']=1;
        m['e']=1;
        m['i']=1,m['o']=1,m['u']=1,m['A']=1,m['E']=1,m['I']=1,m['O']=1,m['U']=1;
        
        int i=0,j=s.length();
        while(i<=j){
            if(m.count(s[i])>0 && m.count(s[j])>0){
                swap(s[i],s[j]);
                i++,j--;
            }
            else if(m.count(s[i])>0 && m.count(s[j])!=1){
                j--;
            }else{
                i++;
            }
        }
        return s;
        
    }
};
