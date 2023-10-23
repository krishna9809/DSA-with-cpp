// Fibonnaci Series term

#include<iostream>
using namespace std;

int fib(int n){
    // Base Condition
    if(n==1){
        return 0;
    }
    if (n==2){
        return 1;
    }

    return fib(n-1) + fib(n-2);
}
int main()
{
   int n;
   cout<<"Enter the term: "<<endl;
   cin>>n;
   cout<<fib(n)<<endl;
}