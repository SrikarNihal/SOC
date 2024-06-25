#include<simplecpp>
int maxi(int* v,int k){
int maxVal=v[0];
for(int i=0;i<k;i++)if(maxVal<v[i])maxVal=v[i];
return maxVal;}
main_program{
int n,k;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
for(int i=0;i<n;i++){
if(i+k<n){
int maximum[k];
for(int a=0;a<k;a++)maximum[a]=arr[i+a];
cout<<maxi(maximum,k)<<" ";}
else if(i+k==n){
int maximum[k];
for(int a=0;a<k;a++)maximum[a]=arr[i+a];
cout<<maxi(maximum,k)<<endl;}
}
}
