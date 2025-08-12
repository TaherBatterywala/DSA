#include <iostream>
using namespace std;

void func(int n, int cnt){
   
   if(cnt == n){
      return;
   }
   cout<<cnt<<endl;
   func(n,cnt+1);

}

int main(){
  int n;
  cout<<"Enter the number of times you want to print n:";
  cin>>n;
  func(n,0);
  return 0;
}
