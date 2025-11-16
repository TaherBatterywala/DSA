#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0,cnt2=0;
        int el1=INT_MIN,el2=INT_MIN;
        int n = nums.size();
        for(int i =0; i<n; i++){
            if(cnt1 == 0 && el2 != nums[i]){
                el1 = nums[i];
                cnt1+=1;
            }
            else if(cnt2 == 0 && el1 != nums[i]){
                el2 = nums[i];
                cnt2+=1;
            }
            else if(nums[i]==el1){
                cnt1+=1;
            }
            else if(nums[i]==el2){
                cnt2+=1;
            }
            else{
                cnt1-=1; 
                cnt2-=1;
            }
        }
        //Check
        vector<int> ls;
        cnt1 = 0, cnt2 = 0;
        for(int i =0; i<n; i++){
            if(el1==nums[i]) cnt1++;
            if(el2==nums[i]) cnt2++;
        }
        int mini = (int)(n/3)+1;
        if(cnt1>=mini) ls.push_back(el1);
        if(cnt2>=mini) ls.push_back(el2);
        sort(ls.begin(), ls.end());
        return ls;
    }
};