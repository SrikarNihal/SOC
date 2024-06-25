#include<simplecpp>
main_program{
int n,m;
cin>>n>>m;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
int totsub=0;
for(int i=0;i<n;i++){
int s=0;
for(int j=i;j<n;j++){
s=s^arr[j];
if(s==m)totsub++;}}
cout<<totsub<<endl;}
