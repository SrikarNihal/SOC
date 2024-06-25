#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void maximumwins(vector<long long int>&p,long long int start,long long int end,long long d,long long &max){
if(start>end){return;}
else if(start==end){if(p[end]>d)max++;return;}
else{
long long int x=d/p[end];
if(p[end]*(end-start+1)>d){
max++;
maximumwins(p,start+x,end-1,d,max);}
else return;}}
int main(){
long long int n,d;
cin>>n;
cin>>d;
vector<long long int>p(n);
for(int i=0;i<n;i++)cin>>p[i];
sort(p.begin(),p.end());
long long int max=0;
maximumwins(p,0,n-1,d,max);
cout<<max<<endl;}
