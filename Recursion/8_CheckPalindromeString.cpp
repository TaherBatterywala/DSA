#include <iostream>
using namespace std;
bool fucn(int i, string s){
    if(i>= s.size()/2){
        return true;
    }
    if(s[i]!=s[s.size()-i-1]){
        return false;
    }
    return fucn(i+1,s);
}

int main(){
    cout<<"Enter the string - ";
    string s;
    cin>>s;
    cout<<fucn(0,s);
    return 0;
}
