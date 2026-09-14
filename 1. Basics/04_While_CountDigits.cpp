#include <iostream>
using namespace std;

int main() {
 
int n; 
int i=0;
cout<<"Enter N = ";
cin>>n;


while (n > 0) {
n=n/10;
i++;
}

cout<<"Total digits = "<<i;

return 0;
}
