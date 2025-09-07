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

    int i = 0;
    for(int j=1; j<n; j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    cout << "Modified array with unique elements - ";
    for(int k = 0; k <= i; k++){
        cout << arr[k] << " ";
    }
    cout << endl;
    cout<<"Number of Unique Element in array -";
    cout<<i+1;
}