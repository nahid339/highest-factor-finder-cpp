#include<iostream>
using namespace std;
int main() {
int n;
cin>>n;
int f;//highest factor
for(int i=1;i<n;i++){
    if(n%i==0) f=i;
}
cout<<f;
return 0;
}
