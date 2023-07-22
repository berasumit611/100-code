#include<iostream>
using namespace std;
int main(){
int year;
cin>>year;
(year%400==0 || (year%4==0 && year%100==0))?cout<<year<<" is leap year ":cout<<year<<" is not a leap year ";
return 0;
}