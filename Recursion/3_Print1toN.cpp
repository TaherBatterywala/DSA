#include <iostream>
using namespace std;

void fucn(int n, int cnt){
    if(cnt>n){
        return;
    }
    cout<<cnt<<endl;
    fucn(n,cnt+1);
}

int main(){
    int n;
    cout<<"Enter the number of times you want to print n:";
    cin>>n;
    fucn(n,1);
    return 0;

}