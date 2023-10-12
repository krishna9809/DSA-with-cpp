#include<iostream>
using namespace std;

void solve(int *p){
     *p = *p + 10;
}
int main()
{
    int a =5;
    int *ptr = &a;
    solve(ptr);
    cout<<a<<endl;
}