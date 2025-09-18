#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) {
            return 0;
        }
        int mini= prices[0];
        int maxprof = 0;
        for (int i = 1; i < prices.size(); ++i) {
            int currprof = prices[i] - mini;
            maxprof = max(maxprof, currprof);
            mini = min(mini, prices[i]);
        }
        
        return maxprof;
    }
};
