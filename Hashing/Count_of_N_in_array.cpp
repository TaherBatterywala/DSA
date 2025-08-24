#include<bits/stdc++.h>
using namespace std;

int main (){
    cout<<"Enter the size of aaray - ";
    int n;
    cin>>n;
    cout<<"Enter the elements of aaray - ";
    int arr[n];
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }

    // Precompute 
    int hash[13]={0};
    for(int i=0; i<n; i++){
        hash[arr[i]] +=1;
    }

    int q;
    cout<<"Enter the number of elements you want to find -";
    cin >>q;
    while(q--){
        int number;
        cout<<"Enter the number you want count of -";
        cin>>number;
        
        //fetch
        cout<<"It appeares this many times -"<<hash[number]<<endl;
    }
}