#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  int ans = 0;
  int p=0;
  while(n!=0){
    int bit = n&1;
    n=n>>1;
    ans=bit*pow(10,p)+ans;
    p++;
  }
  cout<<"Binary Representation: "<<ans;
  return 0;
}