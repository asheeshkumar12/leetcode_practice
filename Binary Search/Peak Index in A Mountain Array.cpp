class Solution {
 // Solution 2: O(log n)  
    int peakMountain(vector<int> &arr,int max){
        int l=0,r=arr.size()-1;
        while(l<r){
            int m=l+(r-l)/2;
            if(arr[m]<arr[m+1]){
                max=m+1;
                l=m+1;
            }
            else{
                max=m;
                r=m;
            }
        }
        return max;
        
    }
public:
    
    int peakIndexInMountainArray(vector<int>& arr) {
        
   // Solution 1: Take O(arr.size()) time
        int it,mx=0;
        for(int i=0;i<arr.size();i++){
            if(mx<arr[i]){
                it=i;
                mx=arr[i];
            }
        }
        return it;
       
     // Solution : 2 take O(log n)
        return peakMountain(arr,0);
    }
};
