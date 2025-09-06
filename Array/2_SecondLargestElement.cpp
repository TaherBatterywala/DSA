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
    int max = arr[0];
    int Smax = 0;
    cout<<"Largest Element of the Array is - ";
    for(int i =0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i] > Smax && arr[i] < max){
            Smax = arr[i];
        }
    }
     for(int i =0; i<n; i++){
        if(arr[i] > Smax && arr[i] < max){
            Smax = arr[i];
        }
    }
    cout<<max<<endl;
    cout<<"Second Largest Element of the Array is - ";
    cout<<Smax;
}