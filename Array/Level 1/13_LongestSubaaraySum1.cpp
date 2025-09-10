// For only Positive and 0
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of an Array - ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an Array (Positive and 0) - ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Array created - ";  
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k;
    cout<<"Enter the sum you want to find in array - ";
    cin>>k;
    int left = 0, right = 0;
    long long sum = arr[0];
    int maxlen = 0;
    while(right < n){
        while(left <= right && sum > k){
            sum -= arr[left];
            left++;
        }
        if(sum == k){
            maxlen = max(maxlen, right - left +1);
        }
        right++;
        if(right < n) sum += arr[right];
    }
    cout<<"The maximum length of the sub array is - "<<maxlen;

}