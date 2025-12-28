#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string> st(dictionary.begin(), dictionary.end());
        string ans = "";
        string check = "";
        for(int i = 0; i < sentence.size(); i++) {
            if(sentence[i] != ' ') {
                check += sentence[i];
                if(st.count(check)) {
                    ans += check; 
                    check = "";
                    while(i + 1 < sentence.size() && sentence[i + 1] != ' ') {
                        i++;
                    }
                }
            } 
            else {
                ans += check; 
                ans += " ";
                check = "";
            }
        }
        ans += check;
        
        return ans;
    }
};