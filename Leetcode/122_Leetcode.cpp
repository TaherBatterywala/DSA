#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int lMin = prices[0]; 
        int lMax = prices[0];  
        int res = 0;
        int i = 0;
        while (i < n - 1) {
            while (i < n - 1 && prices[i] >= prices[i + 1]) { i++; }
            lMin = prices[i];
            while (i < n - 1 && prices[i] <= prices[i + 1]) { i++; }
            lMax = prices[i];
            res = res + (lMax - lMin);
        }
        return res; 
    }
};