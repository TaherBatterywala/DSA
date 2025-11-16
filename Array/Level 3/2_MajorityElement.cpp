#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of the array -";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array -";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Array created - ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int cnt1=0,cnt2=0;
    int el1=INT_MIN,el2=INT_MIN;
    for(int i =0; i<n; i++){
        if(cnt1 == 0 && el2 != arr[i]){
            el1 = arr[i];
            cnt1+=1;
        }
        else if(cnt2 == 0 && el1 != arr[i]){
            el2 = arr[i];
            cnt2+=1;
        }
        else if(arr[i]==el1){
            cnt1+=1;
        }
        else if(arr[i]==el2){
            cnt2+=1;
        }
        else{
            cnt1-=1; 
            cnt2-=1;
        }
    }
    cout<<"The majority Elements are - "<<el1<<" and "<<el2;
}