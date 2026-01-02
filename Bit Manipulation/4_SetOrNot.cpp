#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter bit position to check (0-indexed): ";
    cin >> k;
    if ((n >> k) & 1) {
        cout << "The " << k << "-th bit is SET";
    } else {
        cout << "The " << k << "-th bit is NOT SET";
    }
}