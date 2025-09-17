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
    int maxi = arr[0];
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum = sum + arr[i];
        maxi = max(sum,maxi);
        if(sum < 0){
            sum = 0;
        }
    }
    cout<<"The maximum sum of sub array is - "<<maxi; 
} 
