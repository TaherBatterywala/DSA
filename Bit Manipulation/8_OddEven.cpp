#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (n & 1) {
        cout << "Odd";
    } else {
        cout << "Even";
    }
}