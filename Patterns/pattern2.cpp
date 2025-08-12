/*
**
***
****/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of n - ";
    cin>>n;
    int i = 1;
    for(int i = 1; i<=n; i++){
        int j = 1;
        while (j<=i){
            cout<<"*";
            j = j+1;
        }
        cout<<endl;
    
    }
}
