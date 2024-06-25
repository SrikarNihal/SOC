#include<simplecpp>
int distinctchar(string s){

for(long unsigned int i=0;i<s.length();i++){
for(long unsigned int j=i+1;j<s.length();j++){
if(s[j]==s[i])s.erase(j,1);
}}
return s.length();}
main_program{
string s;
int k;
cin>>k;
cin>>s;
for(long unsigned int i=0;i<s.length();i++){
string substring="";
for(long unsigned int j=i;j<s.length();j++){
substring+=s[j];
if( distinctchar(substring)==k)cout<<substring<<endl;
}}}
