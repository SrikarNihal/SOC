#include<simplecpp>
main_program{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
int largSum=0,sum=0;
for(int i=0;i<n;i++){sum=max(arr[i],sum+arr[i]);largSum=max(largSum,sum);}
cout<<largSum<<endl;}
