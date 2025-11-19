#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of the array -";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array -";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Array created - ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    int target = 0;
    cout<<endl;
    vector<vector<int>> ans;
    for(int i = 0; i<n; i++){
        if(i>0 && arr[i] == arr[i-1]) continue;
        for(int j = i+1; j<n; j++){
            if(j != (i+1) && arr[j]==arr[j-1]) continue;
            int k = j+1;
            int l = n-1;
            while(k < l){
                long long sum = arr[i];
                sum += arr[j];
                sum += arr[k];
                sum += arr[l];
                if(sum == target){
                    vector<int> temp = {arr[i],arr[j],arr[k],arr[l]};
                    ans.push_back(temp);
                    k++; l--;
                    while(k<l && arr[k]==arr[k-1])k++;
                    while(k<l && arr[l]==arr[l+1])l--;
                }
                else if(sum < target){
                    k++;
                }
                else {
                    l--;
                }
            } 
        }
      }
    
}