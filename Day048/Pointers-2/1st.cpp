// Pointer with Array
#include<iostream>
using namespace std;
int main()
{
char name[10] = "Everythin";
char* cptr = &name[0];

cout<<name<<endl; // Everythin
cout<<&name<<endl; //add of name
cout<<(name+3)<<endl; // rythin
cout<<cptr<<endl; //Everythin
cout<<&cptr<<endl; // add of cptr
cout<<*(cptr+3)<<endl; // r
cout<<cptr+2<<endl; // erythin
cout<<*cptr<<endl; // E
cout<<cptr+8<<endl; // n


char h  = 'k';
char*pt = &h;

cout<<pt<<endl;
}