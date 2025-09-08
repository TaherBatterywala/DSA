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
    vector<int> intersectionArr;
    while(i < n && j < k){
        if(arr[i] < arr1[j]){
            i++;
        }
        else if(arr[i] > arr1[j]){
            j++;
        }
        else {
            intersectionArr.push_back(arr[i]);
            i++;
            j++;
        }
    }
    cout << "\nIntersection of the two arrays is: ";
    if (intersectionArr.empty()) {
        cout << "No common elements found.";
    } else {
        for(int val : intersectionArr){
            cout << val << " ";
        }
    }
    cout << endl;
}