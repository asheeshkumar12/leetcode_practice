class Solution {
public:
    
    bool isValidNeighbour(int x,int y ,vector<vector<int>> &board){
        return (x>=0 && x<board.size() && y>=0&& y<board[0].size());
    }
    void gameOfLife(vector<vector<int>>& board) {
        vector<int> v2={1,-1,1,-1,0,0,1,-1};
        vector<int> v1={0,0,1,1,1,-1,-1,-1};
        for(int r=0;r<board.size();r++){
            for(int c=0;c<board[0].size();c++){
                int count_L_N=0;
                for(int i=0;i<8;i++){
                    int curr_v1=r+v1[i];
                    int curr_v2=c+v2[i];
                    if(isValidNeighbour(curr_v1,curr_v2,board) && abs(board[curr_v1][curr_v2])==1)
                        count_L_N++;
                }
                    if(board[r][c]==1 && ((count_L_N<2) || (count_L_N>3)))
                        board[r][c]=-1;
                    if(board[r][c]==0 && count_L_N==3)
                        board[r][c]=2;
                        
                
            }
            
        }
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]>=1)
                    board[i][j]=1;
                else
                    board[i][j]=0;
            }
        }
    }
};
