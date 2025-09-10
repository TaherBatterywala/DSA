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
    int Smax = -1;
    cout<<"Largest Element of the Array is - ";
    for(int i =0; i<n; i++){
        if(arr[i]>max){
            int temp = max;
            max = arr[i];
            Smax = temp;
        }
    }
    cout<<max<<endl;
    cout<<"Second Largest Element of the Array is - ";
    cout<<Smax;
}