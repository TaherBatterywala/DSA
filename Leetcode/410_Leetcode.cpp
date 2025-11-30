#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int cntSub(vector<int>& nums, int maxsum){
        int totsub = 1;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]<=maxsum){
                sum += nums[i];
            }
            else{
                sum=nums[i];
                totsub++;
            }
        }
        return totsub;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int start = *max_element(nums.begin(),nums.end());
        int end = accumulate(nums.begin(),nums.end(),0);
        while(start<=end){
            int mid = start+(end-start)/2;
            int subarray = cntSub(nums,mid);
            if(subarray>k){
                start = mid+1;
            }
            else end = mid-1;
        }
        return start;
    }
};