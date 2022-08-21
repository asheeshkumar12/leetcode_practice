class Solution {
public:
    vector<int> movesToStamp(string stamp, string target) {
         int m = stamp.size(), n = target.size();
        vector<int> ans;
        bool isChanged = true;
        while(isChanged){
            isChanged = false;
            for(int i=0; i<n-m+1; i++){
                int numOfWildcard = 0;
                bool flag = true;
                for(int j=0; j<m; j++){
                    if (target[i+j] == '?'){
                        numOfWildcard++;
                    }else if (target[i+j] != stamp[j]){
                        flag = false;
                        break;
                    }
                }
                if (numOfWildcard == m){
                    continue;
                }
                if (flag){
                    isChanged = true;
                    ans.push_back(i);
                    for(int j = i; j<i+m; j++){
                        target[j] = '?';
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            if (target[i] != '?'){
                return {};
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
