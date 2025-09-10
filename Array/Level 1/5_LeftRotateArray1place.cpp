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
    int temp = arr[0];
    for(int i = 1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp; 
    cout<<"Rotated Array by one place - ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}