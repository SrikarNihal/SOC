#include<iostream>
#include<cstring>
using namespace std;
int main(){
long long int t;
cin>>t;
while(t--){
string s;
long long int n;
cin>>n;
cin>>s;
for(int l=1;l<=n;l++){
bool p=false;
if(n%l==0){
for(int i=0;i<=l;i+=l){
long long int x=0;
for(int j=0;j<n;j++){
if(s[i+j%l]!=s[j])x++;}
if(x<=1){cout<<l<<endl;
	p=true;break;}
}}
if(p)break;
}}}
