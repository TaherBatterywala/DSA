#include <iostream>
using namespace std;

void fucn(int n, int cnt){
    if(cnt<1){
        return;
    }
    cout<<cnt<<endl;
    fucn(n,cnt-1);   
}

int main(){
    int n;
    cout<<"Enter the number of times you want to print n:";
    cin>>n;
    fucn(n,n);
    return 0;    
}