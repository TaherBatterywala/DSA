#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the length of an Array - ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of an Array - ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Array created - ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    if (n <= 1) {
        cout << "The maximum profit is - 0";
        return 0;
    } 
    int res = 0;
    int i = 0;
    while (i < n - 1) {
        while (i < n - 1 && arr[i] >= arr[i + 1]) {
            i++;
        }
        int lMin = arr[i];
        while (i < n - 1 && arr[i] <= arr[i + 1]) {
            i++;
        }
        int lMax = arr[i]; 
        res = res + (lMax - lMin);
    }  
    cout << "The maximum profit is - " << res;
}