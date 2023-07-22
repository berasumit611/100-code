#include<iostream>
using namespace std;
int main(){
int n,remainder,rev_num=0,temp;
cin>>n;
temp=n;
while(temp!=0){
    remainder=temp%10;
    rev_num=rev_num*10+remainder;
    temp=temp/10;
};
(rev_num==n)?cout<<"palindrome no":cout<<"not palindrome";
return 0;
}