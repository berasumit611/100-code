// #include<iostream>
// using namespace std;
// int main(){
// int x,y,z,temp;
// cin>>x>>y>>z;
// temp=x>y?x:y;
// temp=temp>z?temp:z;
// cout<<temp;
// return 0;
// }
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int x,y,z,result;
cin>>x>>y>>z;
result=max(x,max(y,z));
cout<<result;

return 0;
}