#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number -";
    cin>>n;
    string res;
    while(n>0){
        if(n%2==1) res += '1';
        else res +='0';
        n=n/2;
    }
    reverse(res.begin(),res.end());
    cout<<"The Binary Result is - "<<res;
}