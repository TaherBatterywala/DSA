#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        string test = s;
        for(int i =0; i<=n; i++){
            reverse(test.begin(),test.begin()+i);
            reverse(test.begin()+i,test.end());
            reverse(test.begin(),test.end());
            if(test==goal){
                return true;
            }
            else test = s;
        }
        return false;
    }
};