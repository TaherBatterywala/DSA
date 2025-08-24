#include<bits/stdc++.h>
using namespace std;

int main (){
    cout<<"Enter the size of aaray - ";
    int n;
    cin>>n;
    cout<<"Enter the elements of aaray - ";
    int arr[n];
    map<int,int>mpp;
    for(int i =0; i<n; i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    int q;
    cout<<"Enter the number of elements you want to find -";
    cin >>q;
    while(q--){
        int number;
        cout<<"Enter the number you want count of -";
        cin>>number;
        
        //fetch
        cout<<"It appeares this many times -"<<mpp[number]<<endl;
    }
}