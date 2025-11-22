#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of an Array - ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an Array - ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Array created - ";  
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k;
    cout<<"Enter the target you want to find - ";
    cin>>k;
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==k){
            ans = arr[mid];
            break;
        }
        else if(k > arr[mid]) low = mid+1;
        else high = mid-1;
    }
    if(ans == -1){
        cout << "Target not found in the array.";
    } else {
        cout << "The Target is at index -> " << ans;
    }
}