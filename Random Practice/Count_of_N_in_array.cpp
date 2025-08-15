/*How many times a specific number appear in an array of lenght n*/
#include <iostream>
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
    int num;
    int count = 0;
    cout<<"Enter the number you want to find how many times it appear in an Array - ";
    cin>>num;
    for(int i =0; i<n; i++){
        if(arr[i]==num){
            count = count + 1;
        }
    }
    cout<<count;
}
