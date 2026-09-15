#include <iostream>
using namespace std; 

int main() {

 int input; 
 int digit; 
 int sum = 0; 

 cout<<"Enter a number - ";
 cin>>input; 

 int original = input;

 //Works on only 3 digit Armstrong Numbers//

 while(input > 0){
     digit = input % 10; 
     sum = sum + (digit*digit*digit);
     input = input/10;
 }

 if(sum == original){
     cout<<"Its a Armstrong number";
 } else{
    cout<<"Its not a Armstrong number";
 }

 return 0;
}
