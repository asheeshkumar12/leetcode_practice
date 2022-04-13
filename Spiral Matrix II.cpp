class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n,vector<int>(n,1));
        int left=0,right=n-1,bottom=n-1,top=0;
        int val=1;
        while(left<=right && top<=bottom){
            
            for(int j=left;j<=right;j++){
                v[top][j]=val++;
                
            }
            top++;
            for(int i=top;i<=bottom;i++){
                v[i][right]=val++;
            }
            right--;
            for(int j=right;j>=left;j--){
                v[bottom][j]=val++;
            }
            bottom--;
            for(int i=bottom;i>=top;i--){
                v[i][left]=val++;
            }
            left++;
        }
        return v;
        
    }
};
