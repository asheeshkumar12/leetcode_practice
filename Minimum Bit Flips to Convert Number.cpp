class Solution {
public:
    int countBitSet(int n)
    {
        int count=0;
        while(n>0){
            count++;
            n&=(n-1);
        }
        return count;
    }
    int minBitFlips(int start, int goal) {
       return countBitSet(start^goal);
        
        
    }
};
