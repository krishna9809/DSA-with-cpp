// Exponentiation

// 1. Slow MEthod

int slowExpo(int a, int b){
    int ans = 1;

    for(int i = 0 ; i < b; i++){
        ans *= a;
    }
    return ans;
}

// 2. Fast Method

int fastExpo(int a , int b){
    int ans = 1;
    while(b > 0){
        if( b & 1 ){
            // odd
            ans = ans*a;
        }
        a = a * a;
        b = b>>1;
    }
    return ans;
}


#include<iostream>
using namespace std;
int main()
{
    cout<<slowExpo(5,6)<<endl;
    cout<<fastExpo(5,6)<<endl;
}