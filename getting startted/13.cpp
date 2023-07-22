#include<iostream>
#include<cmath>
using namespace std;
int length(int n){
    int count=0;
    while(n!=0){
        count++;
        n=n/10;
    }
    return count;
}
int armstrong(int n,int len){
    int temp=n,sum=0,remainder;
    while(temp!=0){
        remainder=temp%10;
        sum+=pow(remainder,len);
        temp=temp/10;
    }
    if (n==sum) return 1;
    else return 0;
}
int main(){
int n,len;
cin>>n;
len=length(n);
if(armstrong(n,len)) cout<<"armstrong";
else cout<<"not armstrong";
return 0;
}