#include <iostream>
#include<cmath>
using namespace std;

int main() {
   int binary;
   cout<<"Enter a Binary Number: ";
   cin>>binary;
   int i=0;
   int ans=0;
   while(binary!=0){
      int digit=binary%10;
      binary=binary/10;
      if(digit==1){
         ans+=pow(2,i);
      } 
      i++;
   }
   cout<<"Answer is: "<<ans;
   
   return 0;
}
