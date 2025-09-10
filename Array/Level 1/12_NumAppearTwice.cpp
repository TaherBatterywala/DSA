#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of an Array (make it odd) - ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an Array (Make all element appear twice except once) - ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Array created - ";  
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int xorr = 0;
    for(int i=0; i<n; i++){
        xorr = xorr ^ arr[i];
    }
    cout<<"The number which appears once is - "<<xorr;
}