#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());

        priority_queue<int, vector<int>, greater<int>> free_rooms;
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> occupied_rooms;
        
        for(int i = 0; i < n; i++) {
            free_rooms.push(i);
        }

        vector<int> freq(n, 0);

        for(int i = 0; i < meetings.size(); i++) {
            long long start = meetings[i][0];
            long long end = meetings[i][1];

            while(!occupied_rooms.empty() && occupied_rooms.top().first <= start) {
                free_rooms.push(occupied_rooms.top().second);
                occupied_rooms.pop();
            }

            if(!free_rooms.empty()) {
                int room = free_rooms.top();
                free_rooms.pop();
                
                occupied_rooms.push({end, room});
                freq[room]++;
            } else {
                pair<long long, int> curr = occupied_rooms.top();
                occupied_rooms.pop();
                
                long long duration = end - start;
                long long newEnd = curr.first + duration;
                
                occupied_rooms.push({newEnd, curr.second});
                freq[curr.second]++;
            }
        }

        int max_room = 0;
        for(int i = 0; i < n; i++) {
            if(freq[i] > freq[max_room]) {
                max_room = i;
            }
        }

        return max_room;
    }
};