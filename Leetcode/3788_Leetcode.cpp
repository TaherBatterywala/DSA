#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n = nums.size();
        long long prefixSum = accumulate(nums.begin(),nums.end()-1,0LL);
        int suffixMin = nums[n-1];
        long long ans = prefixSum - suffixMin;
        for(int i=n-2; i>0; i--){
            prefixSum -= nums[i];
            suffixMin = min(suffixMin,nums[i]);
            long long temp = prefixSum - suffixMin;
            ans = max(ans, temp);
        }
        return ans;
    }
};