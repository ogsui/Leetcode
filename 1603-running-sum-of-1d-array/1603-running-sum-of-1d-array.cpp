class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 1; nums.size() > i; i++){
            nums[i] = nums[i] + nums[i-1]; 
        };
        return nums;       
    };
};