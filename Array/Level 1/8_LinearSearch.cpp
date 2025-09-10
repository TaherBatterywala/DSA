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
    int num;
    cout<<"Enter the number you want to find the index of -";
    cin>>num;
    for(int i=0; i<n; i++){
        if(arr[i]==num){
            cout<<"The number exist at index -"<<i;
        }
    }
}