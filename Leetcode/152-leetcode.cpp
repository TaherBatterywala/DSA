#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
    public:
        int maxProduct(vector<int>& nums) {
            if (nums.empty()) {
            return 0;
            }
            int lprod = 1;
            int prevlprod = nums[0];
            int prevrprod =nums[0];
            int rprod = 1;
            int mprod = nums[0];
            int n = nums.size();
            for(int i = 0; i<n; i++){
                if(nums[i] == 0){
                    mprod = max(mprod,0);
                    lprod = 1;
                    }
                else {
                    lprod = lprod * nums[i];
                    prevlprod = max(prevlprod, lprod);
                }
                if(nums[n-i-1]==0){
                    mprod = max(mprod,0);
                    rprod = 1;
                }
                else {
                    rprod = rprod*nums[n-i-1];
                    prevrprod = max(prevrprod, rprod);
                }
                
                
                mprod = max({mprod, prevlprod, prevrprod});
            }
            return mprod;
        }
    };