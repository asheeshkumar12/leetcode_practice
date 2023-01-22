class Solution {
public:
    
 
    int alternateDigitSum(int n) {
        //count digit of number
        int num=floor(log10(n) + 1);
       // declare store sum
        int sum=0;
        
            while(n>0){
                int p=n%10;
                // odd position digit 
                if(num%2==1){
                    sum+=p;
                }
                // even position digit
                else{
                    sum-=p;
                }
                 // devide number
                n/=10;
                num--;
            }
        // return ans sum
        return sum;
    }
};
