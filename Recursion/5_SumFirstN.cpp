#include <iostream>
using namespace std;
void fucn(int n,int cnt){
    if(n<1){
        cout<<"The sum of Numbers till N is: "<<cnt<<endl;
        return;
    }
    cnt = cnt + n;
    fucn(n-1,cnt);
}

int main(){
    int n;
    cout<<"Enter the number of times you want to print n: ";
    cin>>n;
    fucn(n,0);
    return 0;

}
