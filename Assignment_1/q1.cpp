#include<simplecpp>
main_program{
int n,k;
cin>>n>>k;
int nums[n];
for(int i=0;i<n;i++)cin>>nums[i];
int shorLen=n+1;
for(int i=0;i<n;i++){
int sum=0;
for(int j=i;j<n;j++){
sum+=nums[j];
if(sum>=k){shorLen=min(j-i+1,shorLen);}}}
if(shorLen==n+1){cout<<"-1"<<endl;}
else cout<<shorLen<<endl;}
