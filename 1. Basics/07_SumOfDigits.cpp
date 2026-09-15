#include <iostream>
using namespace std; 

int main() {

 int num; 
 int digit;
 int total = 0;
 cout<<"Enter a Number - ";
 cin>>num; 

 while(num > 0){
    digit = num % 10;
    total = total + digit;
    num = num/10;
 }
 cout<<total;

 return 0;
}
