#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end());
        int n = events.size();
        vector<int> suffixMax(n);
        suffixMax[n - 1] = events[n - 1][2];
        for (int i = n - 2; i >= 0; i--) {
            suffixMax[i] = max(events[i][2], suffixMax[i + 1]);
        }
        int ans = 0; 
        for (int i = 0; i < n; i++) {
            ans = max(ans, events[i][2]);   
            int left = i + 1;
            int right = n - 1;
            int nextEventIndex = -1;
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (events[mid][0] > events[i][1]) {
                    nextEventIndex = mid;
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            } 
            if (nextEventIndex != -1) {
                ans = max(ans, events[i][2] + suffixMax[nextEventIndex]);
            }
        }
        return ans;
    }
};