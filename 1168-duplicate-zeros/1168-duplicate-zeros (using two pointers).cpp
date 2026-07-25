class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int count = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 0) {
                count++;
            }
        }
        int i = arr.size() - 1;
        int j = arr.size() + count - 1;

        for (; i >= 0; i--) {
            if (arr[i] != 0) {
                if (j < arr.size()) {
                    arr[j] = arr[i];
                }
                j--;
            }

            if (arr[i] == 0) {
                if (j < arr.size()) {
                    arr[j] = 0;
                }
                j--;

                if (j < arr.size()) {
                    arr[j] = 0;
                }
                j--;
            }
        }
    }
};
