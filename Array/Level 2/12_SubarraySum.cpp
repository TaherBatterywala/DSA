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
    cout<<"Enter the Sum you want to find - ";
    int k;
    cin>>k;
    map<int,int> map;
    map[0]=1;
    int presum = 0, cnt =0;
    for(int i=0;i<n;i++){
        presum = presum + arr[i];
        int remove = presum -k;
        cnt = cnt + map[remove];
        map[presum]=map[presum]+1;
    }
    cout<<"The number of Subarray are - "<<cnt;
}