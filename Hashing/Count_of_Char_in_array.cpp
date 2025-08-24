#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string - ";
    cin>>s;

    //pre compute
    int hash[26]={0};
    for(int i =0; i<s.size(); i++){
        hash[s[i]-'a']++;
    }
    int q;
    cout<<"Enter the number of elements you want to find -";
    cin >>q;
    while(q--){
        char c;
        cout<<"Enter the string you want count of -";
        cin>>c;

        //fetch
        cout<<"It appeares this many times -"<<hash[c-'a']<<endl;
    }

}
