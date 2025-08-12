#include <iostream>
using namespace std;
void fucn(int i, int n, int arr[]){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    fucn(i+1,n,arr);
}

int main(){
    int n;
    cout<<"Enter the lenght of Array - ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elemnets of Array - ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    fucn(0,n,arr);
    cout<<"Reversed Array - ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}