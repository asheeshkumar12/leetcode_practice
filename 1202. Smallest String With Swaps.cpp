class Solution {
public:
    vector<vector<int>> g; //make graph
    vector<bool> v;   // make a flag vector
    void ggf(int i,vector<int>&idx,vector<char>&lett,string &s){
        v[i]=true;
        idx.push_back(i);
        lett.push_back(s[i]);
        for(int p:g[i]){
            if(!v[p]){
                ggf(p,idx,lett,s);
            }
        }
    }
    
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        int n=s.length();
        g.resize(n);   //resize according to size of string
        v.resize(n,false);  // resize according to size of string with false value
        for(auto i: pairs){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        
        for(int i=0;i<n;i++){
            vector<int> idx;
            vector<char> lett;
            if(!v[i]){
                ggf(i,idx,lett,s);
                
            }
            sort(idx.begin(),idx.end());
            sort(lett.begin(),lett.end());
            int j=0;
            while(j<idx.size()){
                s[idx[j]]=lett[j];
                j++;
            }
            
        }
        return s;
        
    }
};
