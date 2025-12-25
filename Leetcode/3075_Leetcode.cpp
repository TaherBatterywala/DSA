#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end());
        int n  = happiness.size();
        long long sum = 0;
        int i = 1;
        int cnt = 0;
        while(k!=0){
            int num = happiness[n-i];
            num = max(0, num - cnt);
            sum = sum+num;
            cnt++;
            i++;
            k--;
        }
        return sum;
    }
};