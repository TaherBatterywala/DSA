#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canweplace(vector<int>& position, int balls, int dist){
        int cntball = 1, last = position[0];
        for(int i = 1; i<position.size(); i++){
            if(position[i]-last>=dist){
                cntball++;
                last = position[i];
            }
            if(cntball>=balls) return true;
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n = position.size();
        int start = 1;
        int end = position[n-1]-position[0];
        while(start<=end){
            int mid = start+(end-start)/2;
            if(canweplace(position,m,mid)==true){
                start = mid+1;
            }
            else end = mid-1;
        }
        return end;
    }
};