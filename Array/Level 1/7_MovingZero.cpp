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
    int j = -1;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            j = i;
            break;
        }
    }
    for(int i=j+1; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    cout<<"New array -";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";    
    }
}