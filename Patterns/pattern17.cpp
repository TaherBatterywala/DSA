/* 
   A   
  ABA
 ABCBA
ABCDCBA
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n-";
    cin>>n;
    for(int i =1;i<=n;i++){
        for(int j =1; j<=n-i; j++){
            cout<<" ";
        }
        char ch = 'A';
        char ch1 = 'A'+i-2;
        for(int j = 1; j<=i*2-1; j++){
            if(ch<='A'+i-1){
                cout<<ch;
                ch = ch+1;
            }
            else{
                cout<<ch1;
                ch1 = ch1-1;
            }
        }
        for(int j =1; j<=n-i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}