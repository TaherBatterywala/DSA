#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end());
        int n = capacity.size();
        int sum = accumulate(apple.begin(), apple.end(),0);
        int ans = 0;
        for(int i = n-1; i>=0; i--){
            sum = sum-capacity[i];
            ans++;
            if(sum <=0) break;
        }
        return ans;
    }
};