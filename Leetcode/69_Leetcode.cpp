class Solution {
public:
    int mySqrt(int x) {
        int start = 1;
        int end = x;
        if(x==0) return 0;
        int ans = 1;
        while(start<=end){
            long long mid = start+(end-start)/2;
            long long sqr = mid*mid;
            if(sqr<=x){
                ans = mid;
                start = mid+1;
            }
            else end = mid-1;
        }
        return ans;
    }
};