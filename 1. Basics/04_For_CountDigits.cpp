#include <iostream>
using namespace std;

int main() {
 
int n; 
int i;
cout<<"Enter N = ";
cin>>n;


for(i = 1; n>0; i++){
    
  n = n/10;
  if(n=0){
    break;
  }
}
cout<<"Total digits = "<<i;

return 0;
}
