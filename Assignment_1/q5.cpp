#include<simplecpp>
main_program{
int n,target;
cin>>n>>target;
int numbers[n];
bool p=true;
for(int i=0;i<n;i++)cin>>numbers[i];
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(numbers[i]+numbers[j]==target){cout<<i<<" "<<j<<endl;p=false;}}}
if(p==true)cout<<"-1 -1"<<endl;}
