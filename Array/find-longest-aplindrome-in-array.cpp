#include<bits/stdc++.h>
using namespace std;

int is_palindrome(int x){
    int rev=0,remainder,temp=x;
    while(temp>0){
    remainder=temp%10;
    rev=rev*10+remainder;
    temp=temp/10;
    }
    if(x==rev) return 1;

    return 0;
}

int main(){
    int arr[]={1, 121, 55551, 545545, 10111, 90},n;
    n=sizeof(arr)/sizeof(arr[0]);

    int res=INT_MIN;

    sort(arr,arr+n);

    for(int i=n-1;i>=0;i--){
        if(is_palindrome(arr[i]) && res<arr[i]){
            res=arr[i];
    cout<<res;
            
            break;
        }
    }


return 0;
}