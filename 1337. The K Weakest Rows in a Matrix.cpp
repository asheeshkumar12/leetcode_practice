class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> v;
        for(int i=0;i<mat.size();i++) {
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]==0){
                    pair<int,int> p(j,i);
                    v.push_back(p);
                    break;
                }
                if(j==mat[i].size()-1){
                       pair<int,int> p(j+1,i);
                    v.push_back(p);
                }
            }
            
        }
        vector<int> t;
        sort(v.begin(),v.end());
        for(int i=0;i<k;i++) {
            t.push_back(v[i].second);
        }
        
        return t;
        
                                                                
    }
};
