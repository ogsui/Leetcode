class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;    
        for (int i = 0; accounts.size() > i; i++) {
            int rich = 0;
            for (int j = 0; accounts[i].size() > j; j++) {
                rich += accounts[i][j];
            };
            if (max < rich) {
                max = rich;
            };
        };
        return max; 
    };
};