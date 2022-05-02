class Solution {
public:
    bool isPerfectSquare(int num) {
        double d=sqrt(num);
        int p=sqrt(num);
        double q=p;
        if(d==q){
            
            return true;
            
        }
        return false;
        
    }
};
