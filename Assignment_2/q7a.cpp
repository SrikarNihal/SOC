#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main(){
long long int t;
cin>>t;
while(t--){
long long int n;
cin>>n;
vector<long long int>b(n);
map<long long int,long long int>mp;
for(int i=0;i<n;i++){
long long int c,d;
cin>>c>>d;b[i]=d;
mp[c]=d;}
sort(b.begin(),b.end());
long long int ans=0;
for(auto & it: mp){
auto pos=lower_bound(b.begin(),b.end(),it.second);
ans+=pos-b.begin();
b.erase(pos);}
cout<<ans<<endl;}}

