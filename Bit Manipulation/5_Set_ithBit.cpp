#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter bit position to set (0-indexed): ";
    cin >> i;
    int result = n | (1 << i);

    cout << "Original number: " << n << endl;
    cout << "New number with " << i << "-th bit set: " << result << endl;
}