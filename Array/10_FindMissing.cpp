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
    int sum = n *(n+1)/2;
    int s2 = 0;
    for(int i =0; i<n; i++){
        s2 = arr[i]+s2;
    }
    int remain = sum - s2;
    cout<<"The number which is not present in the array is -"<<remain;
}