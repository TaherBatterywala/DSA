#include <iostream>
using namespace std;

void fucn(int n, int sum){
    if(n<1){
        cout<<"The Factorial of Numbers till N is: "<<sum<<endl;
        return;    
    }
    sum = sum*n;
    fucn(n-1,sum);
}

int main(){
    int n;
    cout<<"Enter the number of times you want to print n: ";
    cin>>n;
    fucn(n,1);
    return 0;
}