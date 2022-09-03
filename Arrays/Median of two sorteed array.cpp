class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        vector<int> arr;
        int i=0,j=0;
        while(i<n&&j<m){
            if(nums1[i]<=nums2[j]){
                arr.push_back(nums1[i]);
                i++;
            }
            else{
                arr.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n){
            arr.push_back(nums1[i]);
            i++;
        }
        while(j<m){
            arr.push_back(nums2[j++]);
        }
        n=arr.size();
        int mid=n/2;
        if(n%2!=0){
            return arr[mid];
        }
        else{
            return (arr[mid-1]+arr[mid])/2.0;
        }
    }
};
