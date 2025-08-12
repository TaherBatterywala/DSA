/*
E
D E
C D E
B C D E
A B C D E
*/#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n-";
    cin>>n;
    char ch = 'A'+n-1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<ch<<" ";
            ch = ch+1;
        }
        ch = 'A'+n-i-1;
        cout<<endl;

        
    }
}