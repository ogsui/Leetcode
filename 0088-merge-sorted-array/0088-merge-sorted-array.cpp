class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i; 
        for (i = 0; i < n; i++)
        {
            nums1[m + i] = nums2[i];
        }
        for (i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums1.size() - i - 1; j++)
            {
                if(nums1[j] > nums1[j + 1])
                {
                    swap(nums1[j],nums1[j+1]);
                }
            }
        }
        return;        
    }
};