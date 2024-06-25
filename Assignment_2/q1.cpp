#include<iostream>
using namespace std;
int main(){
long long int t;
cin>>t;
while(t--){
long long int n;
cin>>n;
long long int a[n];
for(long long int i=0;i<n;i++)cin>>a[i];
if(n%2)cout<<"YES"<<endl;
else{
for(int i=1;i<n-1;i++){
a[i+1]+=(a[i-1]-a[i]);
a[i]=a[i-1];}
if(a[n-1]>=a[n-2])cout<<"YES"<<endl;
else{cout<<"NO"<<endl;}
}}}
