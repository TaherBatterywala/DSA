#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of an Array - ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an Array - ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Array created - ";  
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int mini= arr[0];
    int maxprof = 0;
    for (int i = 1; i < n; i++) {
        int currprof = arr[i] - mini;
        maxprof = max(maxprof, currprof);
        mini = min(mini, arr[i]);
    }
    cout<<"The maximum profit is - "<<maxprof;

}