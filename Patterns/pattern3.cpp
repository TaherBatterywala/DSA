/* 
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n -";
    cin>>n;
    for(int i = 1; i<=n; i++){
        int count = 1;
        for(int j = 1; j<=i; j++){
            cout<<count<<" ";
            count = count + 1;
        }
        cout<<endl;
    }

}
