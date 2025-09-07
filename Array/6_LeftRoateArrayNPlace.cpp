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
    int d;
    cout<<"Enter the Value how many places you want to rotate the array - ";
    cin>>d;
    d = d%n;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
    cout<<"Rotated array - ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}