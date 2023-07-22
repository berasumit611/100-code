#include<iostream>
using namespace std;
int main(){
int x,y,sum=0;
cin>>x>>y;
sum=y*(y+1)/2-x*(x+1)/2+x;
cout<<sum;
return 0;
}