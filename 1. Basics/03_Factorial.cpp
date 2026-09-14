#include <iostream>
using namespace std;

int main() {
 
int n; 
int m=1;
cout<<"Enter N = ";
cin>>n;


for(int i = 1; i <= n; i++){
    cout<<i<<" ";
    m=m*i;
}
cout<<"= "<<m;

return 0;
}
