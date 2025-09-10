#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of the array 1 -";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array 1 -";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Array 1 created - ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;      
    int k;
    cout<<"Enter the length of the array 2 -";
    cin>>k;
    int arr1[k];
    cout<<"Enter the elements of the array 2 -";
    for(int i=0; i<k; i++){
        cin>>arr1[i];
    }
    cout<<"Array 2 created - ";
    for(int i=0; i<k; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    sort(arr, arr + n);
    sort(arr1, arr1 + k);
    int i = 0, j = 0;
    vector<int> unionArr;
    while(i < n && j < k){
        if(arr[i] < arr1[j]){
            if(unionArr.empty() || unionArr.back() != arr[i]){
                unionArr.push_back(arr[i]);
            }
            i++;
        }
        else if(arr[i] > arr1[j]){
            if(unionArr.empty() || unionArr.back() != arr1[j]){
                unionArr.push_back(arr1[j]);
            }
            j++;
        }
        else {
            if(unionArr.empty() || unionArr.back() != arr[i]){
                unionArr.push_back(arr[i]);
            }
            i++;
            j++;
        }
    }
    while(i < n){
        if(unionArr.empty() || unionArr.back() != arr[i]){
            unionArr.push_back(arr[i]);
        }
        i++;
    }
    while(j < k){
        if(unionArr.empty() || unionArr.back() != arr1[j]){
            unionArr.push_back(arr1[j]);
        }
        j++;
    }
    cout << "\nUnion of the two arrays is: ";
    for(int val : unionArr){
        cout << val << " ";
    }
    cout << endl;
}