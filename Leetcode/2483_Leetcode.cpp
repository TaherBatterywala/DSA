#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        int curPenalty = 0;
        for(int i = 0; i < n; i++) {
            if(customers[i] == 'Y') {
                curPenalty++;
            }
        }
        int minPenalty = curPenalty;
        int bestHour = 0;
        for(int i = 0; i < n; i++) {
            if(customers[i] == 'Y') {
                curPenalty--; 
            } else {
                curPenalty++;
            }
            if(curPenalty < minPenalty) {
                minPenalty = curPenalty;
                bestHour = i + 1;
            }
        }

        return bestHour;
    }
};