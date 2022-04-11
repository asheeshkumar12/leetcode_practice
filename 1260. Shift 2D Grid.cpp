class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
       int m=grid.size(); // size of rows
        int n=grid[0].size();  // size of column
        vector<vector<int>> grid2(m,vector<int>(n,0)); // declare a 2-d vector 
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int newVal=((i*n+j)+k)%(m*n); //find new index value
                grid2[newVal/n][newVal%n]=grid[i][j];// assign new index value
            }
        }
        return grid2;// return grid 2
    }
};
// total time complexity  O(m*n);
// space complexity   O(n*n);
