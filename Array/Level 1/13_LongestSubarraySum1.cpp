// only Positive values 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of an Array - ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an Array (All Positive) - ";
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
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxlen = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum == k){
            maxlen = max(maxlen, i+1);
        }
        long long rem = sum - k;
        if(preSumMap.find(rem)!=preSumMap.end()){
            int len = i-preSumMap[rem];
            maxlen = max(maxlen,len);
        }
        if(preSumMap.find(sum)== preSumMap.end()){
            preSumMap[sum] = i;
        } 
    }
    cout<<"The maximum length of the sub array is - "<<maxlen;

}