#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(auto x:s)
            mp[x]++;
        
        priority_queue<pair<int,char>> pq;
        
        for(auto x: mp)
            pq.push(make_pair(x.second,x.first));
        
        s = "";
        
        while(!pq.empty())
        {
            char c = pq.top().second;
            for(int i = 0;i<pq.top().first;i++)
                s.push_back(c);
            pq.pop();
        }
        return s;
    }
};
