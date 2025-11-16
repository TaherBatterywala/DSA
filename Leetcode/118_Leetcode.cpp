#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> prevRows;

        for(int i=0;i<numRows;i++){
            vector<int> currR(i+1,1);

            for(int j=1;j<i;j++){
                currR[j]= prevRows[j-1]+prevRows[j];
            }
            ans.push_back(currR);
            prevRows = currR;
        }

        return ans;
    }
};