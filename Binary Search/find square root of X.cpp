class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        //solution 1:
//         if(x<=3) return 1;
        
//         for(int i=1;i<=x;i++){
//             if(i>x/i)
//             {
//                 return i-1;
//             }
//         }
//         return 0;
         
        //solution 2:
        int s=1,e=x;
        int ans;
        while(s<=e){
            
            int mid=s+(e-s)/2;
            
            if(mid<=x/mid){
                ans=mid;
                s=mid+1;
            }
            else{
               
                e=mid-1;
            }
            
        }
        return ans;
        
        
    }
};
