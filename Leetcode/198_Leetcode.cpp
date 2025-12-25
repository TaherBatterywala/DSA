#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int val1 = 0;
        int val2 = 0;
        for(int i=0; i<n; i++){
            int curr = max(nums[i]+val2, val1);
            val2 = val1;
            val1 = curr;
        }
        return val1;
    }
};