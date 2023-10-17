#include<iostream>
using namespace std;
int main() {
 int num;
 cout<<"Enter a number: ";
 cin>>num;

 if(num%400==0)
 {cout<<"leap year";}
 else if(num%100!=0 && num%4==0)
 {cout<<"Leap Year";}
 else
 { cout<<"Not a leap year";}}

