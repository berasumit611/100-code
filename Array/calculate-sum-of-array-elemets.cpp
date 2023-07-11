#include<iostream>
using namespace std;
int main(){
int arr[]={1,1,1,1,1},n,sum=0;
n=sizeof(arr)/sizeof(arr[0]);
for (int i = 0; i < n; i++)
{
    sum+=arr[i];
}
cout<<sum;
return 0;
}