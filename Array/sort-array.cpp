#include<iostream>
#include<algorithm>
using namespace std;

void print(int arr[],int n){
    for (int i = 0; i <n; i++)
{
    cout<<arr[i]<<" ";
}

}


int main(){
int arr[]={10,25,0,12,400,3,5,-9,45,-7,-10,10},n;
n=sizeof(arr)/sizeof(arr[0]);

sort(arr,arr+n);
print(arr,n);
cout<<endl;
sort(arr,arr+n,greater<int>());
print(arr,n);
return 0;
}