#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of an Array - ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an Array (Keep 1 element majority) - ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Array created - ";  
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int cnt = 0;
    int ele;
    for(int i=0; i<n; i++){
        if(cnt == 0){
            cnt=1;
            ele=arr[i];
        }
        else if(arr[i]==ele){
                cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1 = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==ele){
                cnt1++;
        }
    }
    if(cnt1>(n/2)){
        cout<<"Majority Element is - "<<ele;
    }
}