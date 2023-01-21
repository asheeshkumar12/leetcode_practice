class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0,j=0;
        int m=INT_MAX;
        while(i<n1 &&j<n2)
        {
            if(nums1[i]==nums2[j])
            {
                m=nums1[i];
                break;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        if(m!=INT_MAX)
            return m;
        else
            return -1;
    }
};
