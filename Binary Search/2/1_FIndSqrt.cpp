#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number you want to find the sqrt of -> ";
    cin>>x;
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
    cout<<"The sqrt of the number is -> "<<ans;
}
