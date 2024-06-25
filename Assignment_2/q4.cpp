#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>a(2*n);
for(int i=0;i<2*n;i++)cin>>a[i];
sort(a.begin(),a.end());
cout<<a[2*n-1]+a[n-1]-a[n]-a[0]<<endl;
for(int i=0;i<n;i++)cout<<a[n+i]<<" "<<a[i]<<endl;}}
