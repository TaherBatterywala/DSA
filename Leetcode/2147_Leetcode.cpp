#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfWays(string corridor) {
        vector<int> seats;
        int n = corridor.length();
        for (int i = 0; i < n; i++) {
            if (corridor[i] == 'S') {
                seats.push_back(i);
            }
        }
        if (seats.size() == 0 || seats.size() % 2 != 0) {
            return 0;
        }
        long long ways = 1;
        long long mod = 1e9 + 7;
        for (int i = 2; i < seats.size(); i += 2) {
            int length = seats[i] - seats[i-1];
            ways = (ways * length) % mod;
        }
        
        return (int)ways;
    }
};