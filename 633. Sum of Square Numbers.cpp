class Solution {
public:
    bool judgeSquareSum(int c) {
        int a=sqrt(c);
        long i=0,j=a;
        while(i<=j){
            if(i*i+j*j==c){
                return true;
            }
            else if(i*i+j*j <c){
                i++;
            }
            else{
                j--;
            }
        }
        return false;
        
    }
};
