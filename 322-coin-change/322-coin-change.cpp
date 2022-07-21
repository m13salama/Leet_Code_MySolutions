class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> first(amount + 1, amount + 1);
        first[0] = 0;
        
        for (int i = 1; i <= amount; i++) {
            for (int j = 0; j < coins.size(); j++) {
                if (i - coins[j] >= 0) {
                    first[i] = min(first[i], 1 + first[i - coins[j]]);
                }
            }
        }
        
        if (first[amount] == amount + 1) {
            return -1;
        }
        return first[amount];
    }
};