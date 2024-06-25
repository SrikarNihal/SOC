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
vector<int>a(n);
for(int i=0;i<n;i++)cin>>a[i];
sort(a.begin(),a.end());
vector<int>b;
b.push_back(a[0]);
for(int i=1;i<n;i++){
if(a[i]!=a[i-1])b.push_back(a[i]);}
int maxi=0;
int c=b.size();
for(int i=0;i<c;i++){
int best=lower_bound(b.begin(),b.end(),b[i]+n)-b.begin()-i;
maxi=max(maxi,best);}
cout<<maxi<<endl;}}
