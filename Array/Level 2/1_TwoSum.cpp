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
    int k;
    cout<<"Enter the Sum you want to find - ";
    cin>>k;
    for(int i=0; i<n; i++){
        for(int j= i+1; j<n; j++){
            if(arr[i]+arr[j] == k){
                cout<<"index are - ["<<i<<" "<<j<<"]"<<endl;
                break;
            }
        }
    }
}