#include<simplecpp>
main_program{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
int minVal=arr[0];
for(int i=1;i<n;i++){
if(minVal>arr[i])minVal=arr[i];}
cout<<minVal<<endl;}
