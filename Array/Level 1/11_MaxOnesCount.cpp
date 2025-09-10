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
    int sum = 0;
    int maxsum = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]==1){
            sum = sum + 1;
            if(sum > maxsum){
                maxsum = sum;
            }
        }
        else(sum = 0);
    }
    cout<<"The maximum number of ones in single row - "<<maxsum;
}