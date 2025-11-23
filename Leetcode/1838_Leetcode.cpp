#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long long sum = 0; 
        int left = 0;    
        int ans = 1;
        for(int i = 0; i < n; i++){
            long long target = nums[i];
            sum += target;
            while((long long)(i - left + 1) * target - sum > k){
                sum -= nums[left];
                left++;
            }
            ans = max(ans, i - left + 1);
        }
        return ans;
    }
};