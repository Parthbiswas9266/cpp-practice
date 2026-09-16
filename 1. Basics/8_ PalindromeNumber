#include <iostream>
using namespace std; 

int main() {

 int num; 
 int digit;
 int pal=0;

 cout<<"Enter a number - ";
 cin>>num;

 int original = num;//Storing the value of num//

  while(num > 0){
     digit = num%10; 
     pal = pal * 10 + digit;
     num = num/10;
   }
   
 //comparing the flipped number to see if its a Palindrome //

   if(original==pal){
      cout<<"Its a Palindrome";
   } else{
      cout<<"Its not a Palindrome";
   }

 return 0;
}
