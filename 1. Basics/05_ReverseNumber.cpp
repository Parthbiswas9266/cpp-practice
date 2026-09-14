#include <iostream>
using namespace std;

int main() {

int m=0;    
int n; 
int i;
cout<<"Enter N = ";
cin>>n;

while (n > 0) {
i=n%10;
m=m*10+i;
n=n/10;
}
cout<<m;

return 0;
}
