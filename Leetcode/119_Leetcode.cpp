#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        long long prev = 1;
        ans.push_back(prev);
        for(int i=0; i<rowIndex; i++){
            prev = prev * (rowIndex-i);
            prev = prev/(i+1);
            ans.push_back(prev);
        }
        return ans;
    }
};