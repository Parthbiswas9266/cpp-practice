#include <iostream>
using namespace std;

int a, b;

int add(){
 return a + b; 
}
int subtract(){
    return a - b; 
}
int  multiply(){
    return a * b;
}
double divide(){
    return (double) a / b;
}

int main() {
 cout<<"Enter a & b - ";
 cin>>a>>b;

 cout<<"Addition "<<add()<<endl;
 cout<<"Subtraction "<<subtract()<<endl;
 cout<<"Multiplication "<<multiply()<<endl;
 cout<<"Division "<<divide()<<endl;
 return 0;
}
