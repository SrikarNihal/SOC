#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main(){
long long int t;
cin>>t;
while(t--){
long long int n;
cin>>n;
vector<long long int>a(n);
vector<long long int>b(n);
long long int sum =0;
for(int i=0;i<n;i++){cin>>a[i];
sum+=a[i];
}
b=a;
sort(b.begin(),b.end());
unordered_map<long long int,long long int>maxi;
maxi[b[n-1]]=n-1;
for(int i=n-2;i>=0;i--){
sum=sum-b[i+1];
if(sum>=b[i+1])maxi[b[i]]=maxi[b[i+1]];
else maxi[b[i]]=i;}
for(int i=0;i<n;i++)cout<<maxi[a[i]]<<endl;}}
