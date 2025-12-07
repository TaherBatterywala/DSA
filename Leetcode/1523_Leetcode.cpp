#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countOdds(int low, int high) {
        int mid = (high-low)/2;
        int ans = 0;
        if(low%2 == 0 && high%2 == 0){
            ans = mid;
        }
        else if(low%2 != 0 && high%2 != 0){
            ans = mid+1;
        }
        else{
            ans = mid+1;
        }
        return ans;
    }
};