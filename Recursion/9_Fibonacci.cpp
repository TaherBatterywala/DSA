#include <iostream>
using namespace std;
int fucn(int n){
    if(n<=1){
        return n;
    }
    int last = fucn(n-1);
    int slast = fucn(n-2); 
    return last + slast;   
}

int main(){
    int n;
    cout<<"Enter the value of N - ";
    cin>>n;
    cout<<fucn(n);
    return 0;
}