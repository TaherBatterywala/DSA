/*
12345
1234
123
12
1
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n- ";
    cin>>n;
    
    for(int i = 1;i<=n; i++){
        int count = 1;
        for(int j=n; j>=i; j--){
            cout<<count;
            count = count+1;
            
        }
        cout<<endl;
    }
}