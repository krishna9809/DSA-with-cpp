// SWitch CASE
#include<iostream>
using namespace std;
int main(){
int value;
cout<<"Enter the Value"<<endl;
cin>>value;

switch (value)
{
case 1:
    cout<<"Krishna"<<endl;
    break;
case 2:
    cout<<"Shresth"<<endl;
    break;
case 3:
    cout<<"Ramesh"<<endl;
    break;
case 4:
    cout<<"Suresh"<<endl;
    break;
default:
    cout<<"Wrong Value"<<endl;
    break;
}
}

// We cannot use continue statement in switch case
// we can give value in case of int or char only
// no duplicate case can possible