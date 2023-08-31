// Pre/Post INcrement and DEcrement

#include<iostream>
using namespace std;
int main() {
    int a = 12;
    cout<<a++<<endl; // output == 12
    cout<<a<<endl; // 13
    cout<<++a<<endl; // 14
    cout<<a<<endl; // 14

    int b = 6;

    cout<<b--<<endl; // 6
    cout<<b<<endl; // 5
    cout<<--b<<endl; //4
    cout<<b<<endl; // 4

    int c = 7;
    int d = ++c + 1;
    cout<<d<<endl; //9

    int e = (++c) * (--d); // 72
    cout<<e<<endl;
    }