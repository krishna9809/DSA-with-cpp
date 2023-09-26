// Bitwise Operators

#include<iostream>
using namespace std;
int main(){
bool a = true;
bool b = false;
// AND operator &
cout<<(a&b);
cout<<endl;

// OR operator |
bool c = false;
bool d = false;

cout<<(a|b);
cout<<endl;
a = ~a;

// NOT operator ~(tilda)
cout<<(~a);
cout<<endl;

// Exclusive OR --> XOR ^ 
cout<<(a^b);
cout<<endl;
cout<<(2&3)<<endl;
cout<<(3|4)<<endl;
cout<<(5&10)<<endl;
}