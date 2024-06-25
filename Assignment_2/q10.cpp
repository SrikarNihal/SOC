#include<iostream>
#include<cmath>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
long long int t;
cin>>t;
while(t--){
long long int n;
cin>>n;
vector<long long int>a(n);
for(long long int i=0;i<n;i++)cin>>a[i];
if(n==1)cout<<"0"<<endl;
else{
unordered_map<double,int>freq;
long long int ans=0;
for(long long int i=0;i<n;i++){
double c=a[i]-log2(a[i]);
ans+=freq[c];
freq[c]++;}
cout<<ans<<endl;}}}

