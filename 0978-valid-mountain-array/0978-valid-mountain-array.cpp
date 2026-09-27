class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i = 0;
        int j = arr.size() - 1;
        while (i < arr.size() - 1 && (arr[i] < arr[i + 1])) {
            i++;
        }
        while (j > 0 && (arr[j] < arr[j - 1])) {
            j--;
        }
        if (i == j && (i!=0 && j!= arr.size() - 1)) {
            return true;
        } else {
            return false;
        }
        return bool();
    }
};