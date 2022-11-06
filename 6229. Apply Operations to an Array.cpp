class Solution {
public:
    void move0toend(std::vector<int>& arr)
{
  std::stable_partition(arr.begin(),
            arr.end(),
            [](int n) { return n != 0; });
}
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i-1]==nums[i]){
                nums[i-1]*=2;
                nums[i]=0;
            }
        }
        move0toend(nums);
        return nums;
    }
};
