#include<iostream>
using namespace std;
int main(){

int n,lastdigit,sum=0;
cin>>n;
do{
lastdigit=n%10;
sum+=lastdigit;
n=n/10;

}while(n>0);
cout<<sum;
return 0;
}