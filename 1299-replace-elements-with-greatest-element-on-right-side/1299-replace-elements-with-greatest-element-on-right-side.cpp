class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxR = -1;
        for (int n = arr.size() - 1; n >= 0; n--){
            int temp = arr[n];
            arr[n] = maxR;
            maxR = max(maxR, temp);
        }   
        return arr;
    }
};