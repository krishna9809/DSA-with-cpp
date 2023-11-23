// Reverse a Number

#include<iostream>
using namespace std;

int main()
{
    int N = 123;
    int num = N;
    int reverse = 0;
    while(N!=0)
    {
        int digit = N%10;
        reverse = reverse*10+digit;
        N = N/10;
    }
    cout<<reverse<<endl;
}