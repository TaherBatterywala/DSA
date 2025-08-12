/*
1        1
12      21
123    321
1234  4321
1234554321
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n-";
    cin>>n;
    for(int i =1; i<=n; i++){
        int count = 1;
        int count1 = i;
        for(int j=1; j<=i; j++){
            cout<<count;
            count = count+1;
        }
        for(int j=1; j<=((n*2)-(i*2)); j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<count1;
            count1 = count1-1;
        }
        cout<<endl;
    }   
}