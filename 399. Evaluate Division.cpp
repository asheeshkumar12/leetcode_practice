class Solution {
public:
    
    double dfs(string a,string b, unordered_map<string,unordered_map<string,double>> memo,  unordered_set<string> &temp)
    {                                                                //function defination 
        if(memo[a].find(b)!=memo[a].end()){
            return memo[a][b];
        }
        for(auto itr:memo[a]){
            if(temp.find(itr.first)==temp.end()){
                temp.insert(itr.first);
                double val=dfs(itr.first,b,memo,temp);
                if(val)
                {
                    memo[a][b]=itr.second*val;
                    return memo[a][b];
                }
            }
        }
        return 0;
        
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        vector<double> res;
        unordered_map<string,unordered_map<string,double>> memo;
        for(int i=0;i<equations.size();i++) {   // equations loop
            
            memo[equations[i][0]][equations[i][1]]=values[i]; // all value insert into the map
            memo[equations[i][1]][equations[i][0]]=(double)1.0/values[i];  // also reverese travelling calc insert
        }
       // then forword the queries loop
        for(int i=0;i<queries.size();i++){  // queries loop
            
            unordered_set<string> temp;
            double ans=dfs(queries[i][0],queries[i][1],memo,temp);//function call
            if(!ans) 
                res.push_back(-1.0);
            else
                res.push_back(ans);
            
        }
        return res;
        
    }
    
};
