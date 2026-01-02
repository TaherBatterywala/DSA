#include<bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cout << "Enter the binary number - ";
    cin >> n;
    
    int decimal = 0;
    int base = 1;
    
    for(int i = n.length() - 1; i >= 0; i--){
        if(n[i] == '1'){
            decimal += base;
        }
        base *= 2;
    }
    
    cout << "The Decimal Result is - " << decimal;
}