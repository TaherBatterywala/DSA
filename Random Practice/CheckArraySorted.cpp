#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
        if (nums.empty()) {
            return true;
        }
        int n = nums.size();
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]>nums[j]){
                return false;
                }
            }      
        }
        return true;
    } 

};