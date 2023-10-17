#include<iostream>
using namespace std;
int main() {

    int ans=0,rem,num;
    cout<<"Enter a number ";
    cin>>num;

    while(num)
     {
    rem = num% 10;
    num/=10;

    ans=ans*10+rem;
     }

    cout<<"reverse number of a number you entered "<<ans;
}
