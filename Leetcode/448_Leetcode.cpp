#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n + 1, 0);
        vector<int> MissingNumbers;
        for (int i = 0; i < n; i++) {
            ans[nums[i]]++;
        }
        for (int i = 1; i <= n; i++) {
            if (ans[i] == 0)
                MissingNumbers.push_back(i);
        }
        return MissingNumbers;
    }
};