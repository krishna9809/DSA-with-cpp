// variable scoping
#include<iostream>
using namespace std;
int d = 40; // global variable
int main(){
    int a = 12;
    cout<<a<<endl;
//  cannot define again // int a = 16 // 
    int b = 0;
    if(true){
        int b = 10;
        cout<<10<<endl;
        cout<<d<<endl;  // 40
    }
    cout<<b<<endl;
    cout<<d<<endl;  // 40
}