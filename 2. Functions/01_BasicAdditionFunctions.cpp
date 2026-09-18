#include <iostream>
using namespace std;



int add(){
    int a, b;
    cout<<"Enter a - "<<endl;
    cin>>a;
    cout<<"Enter b - "<<endl;
    cin>>b;
    return a + b;
}

int main() {
 cout<<"Total = "<<add()<<endl;
 return 0;
}
