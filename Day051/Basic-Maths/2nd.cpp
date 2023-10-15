// L C M

#include<iostream>
using namespace std;

int gcd(int A, int B){
    if(A==0) return B;

    if(B==0) return A;


    while(A==0 || B == 0){

        if(A>B){
            A = A - B;
        }
        else{
            B = B -A;
        }
    }

    if(A == 0){
        return B;
    }
    else{
        return A;
    }
}
int main()
{
    int A;
    int B;

    cout<<"Enter the Values to Find L.C.M. : "<<endl;
    cin>>A>>B;

    int HCF = gcd(A,B);

    int LCM = (A*B) / HCF;

    cout<<LCM<<endl;
}