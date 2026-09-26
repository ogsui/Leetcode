class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> seen;
            for (int x : arr) {
                if (x%2==0){
                    if (seen.find(x/2)!= seen.end()) {
                        return true;
                    }
                }
                if (seen.find(x*2)!= seen.end()) {
                        return true;
                }
                seen.insert(x);
            }
        return false;
    };
};