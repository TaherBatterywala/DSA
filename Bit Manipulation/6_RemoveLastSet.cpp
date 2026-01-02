#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int result = n & (n - 1);

    cout << "Original number: " << n << endl;
    cout << "Result after removing last set bit: " << result << endl;
}