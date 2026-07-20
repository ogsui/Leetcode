class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        vector<int> ans(nums.size());
        int i = nums.size() - 1;
        while (left <= right){
            if(nums[left]*nums[left] > nums[right]*nums[right]){
                ans[i] = nums[left]*nums[left];  
                left++;             
            }
            // if(nums[left]*nums[left] <= nums[right]*nums[right]){
            else{
                ans[i] = nums[right]*nums[right];
                right--;               
            }
            i--;
        }
        return ans;
    }
};
