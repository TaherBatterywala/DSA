#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of A - ";
    cin>>a;
    cout<<"Enter the value of B - ";
    cin>>b;
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<"After swap the value of A - "<<a<<" The value of B - "<<b;
}