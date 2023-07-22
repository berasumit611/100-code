#include<iostream>
using namespace std;
int main(){
int n,remainder,rev_num=0;
cin>>n;

while(n!=0){
    remainder=n%10;
    rev_num=rev_num*10+remainder;
    n=n/10;
};
cout<<rev_num;
return 0;
}