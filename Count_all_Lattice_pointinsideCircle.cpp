class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
        
        int p=0;
        bool flag=false;
        for(int x=0;x<=200;x++){
            for(int y=0;y<=200;y++){
                flag=false;
                for(int i=0;i<circles.size()&& !flag;i++){
                    if((x-circles[i][0])*(x-circles[i][0])+(y-circles[i][1])*(y-circles[i][1]) <=circles[i][2]*circles[i][2]){
                        flag=true;                
                    }                //lattice point x^2+y^2=r^2 satisfied
                }
                if(flag){
                    p++;
                }
            }
        }
        return p;
        
    }
};
