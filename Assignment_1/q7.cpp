#include<simplecpp>
main_program{
int n;
cin>>n;
int x=0;
for(int i=0;i<=n;i++){
if((n+i)==(n^i))x++;}
cout<<x<<endl;}
