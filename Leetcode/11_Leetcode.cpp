#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int lp = 0;
        int rp = n-1;
        int maxwater = INT_MIN;
        while(lp<rp){
            int wid = rp-lp;
            int hei = min(height[lp],height[rp]);
            int area = wid*hei;
            maxwater = max(area,maxwater);
            if(height[lp]<height[rp]) lp++;
            else rp--;
        }
        return maxwater;
    }
};