#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        int mod = 1000000007;
        int n = nums.size();
        unordered_map<int, int> mapLeft;
        unordered_map<int, int> mapRight;
        long long cnt = 0;
        for(int i = 2; i < n; i++) {
            mapRight[nums[i]]++; 
        }
        mapLeft[nums[0]] = 1;
        int i = 1;
        while(i < n - 1) {
            long long req = 2LL * nums[i];
            if(mapLeft.count(req) && mapRight.count(req)) {
                long long n1 = mapLeft[req];
                long long n2 = mapRight[req];
                long long product = (n1 * n2) % mod;
                cnt = (cnt + product) % mod;
            }
            mapLeft[nums[i]]++;
            if(i + 1 < n) {
                int nextVal = nums[i+1];
                mapRight[nextVal]--;

                if(mapRight[nextVal] == 0) {
                    mapRight.erase(nextVal);
                }
            }
            i++;
        }
        return (int)cnt;
    }
};