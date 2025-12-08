#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum = 0;
        int maxsum = 0;
        for(int i =0; i<nums.size(); i++){
            if(nums[i]==1){
                sum = sum +1;
                if(sum > maxsum){
                    maxsum = sum;
                }
            }
            else(sum = 0);
        }
        return maxsum;
    }
};