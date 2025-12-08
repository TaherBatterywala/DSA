#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        vector<int> sorted = nums;
        int n = nums.size();
        sort(sorted.begin(),sorted.end());

        unordered_map<int,int> smallerCount;
        for(int i=0; i<n; i++){
            if(smallerCount.find(sorted[i]) == smallerCount.end()){
                smallerCount[sorted[i]] = i;
            }
        }
        ans.reserve(n);
        for (int num : nums) {
            ans.push_back(smallerCount[num]);
        }

        return ans;
    }
};