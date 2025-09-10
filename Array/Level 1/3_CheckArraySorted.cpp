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
    cout<<endl;
    cout<<"Array created - ";  
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bool sorted = true;
    for(int i = 1; i < n; i++){
        if(arr[i-1] > arr[i]){
            cout << "Array is not sorted" << endl;
            sorted = false;
            break;
        }
    }
    if(sorted){
        cout << "Array is Sorted" << endl;
    }
}