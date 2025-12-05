#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
        for(int i = 0; i<n-1; i++){
            int num1 = accumulate(nums.begin(),nums.begin()+i+1,0);
            int num2 = accumulate(nums.begin() + i + 1, nums.end(), 0);
            if((num1-num2)%2 == 0) cnt++;
        }
        return cnt;
    }
};