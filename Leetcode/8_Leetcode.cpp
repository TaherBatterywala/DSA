#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        long ans = 0;
        int sign = +1;
        if(s.length()==0) return 0;
        int i = 0;
        while(i<n && s[i] == ' '){
            i++;
        }
        s = s.substr(i);
        if(s[0] == '-'){
            sign = -1;
            i = 1;
        }
        else if(s[0] == '+'){
            i = 1;
        }
        else i = 0;
        int MAX = INT_MAX, MIN = INT_MIN;
        while(i<s.size()){
            if(s[0] == ' ' || !isdigit(s[i])) break;
            ans = ans*10+s[i]-'0';
            i++;
            if(sign == -1 && -1*ans<MIN) return MIN;
            if(sign == 1 && ans>MAX) return MAX;
        }
        return (int)(sign*ans);
    }
};