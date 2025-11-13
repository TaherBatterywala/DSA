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
    vector<int> ans(n,0);
    int pos = 0;
    int neg = 1;
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            ans[neg]=arr[i];
            neg = neg+2;
        }
        else{
            ans[pos]=arr[i];
            pos=pos+2;
        }
    }
    cout<<"The ReArranged array is - ";
    for(int i = 0; i<n; i++){
        cout<<ans[i]<<" ";
    }
}