//Decimal to Binary (Division Method)

#include<iostream>
#include<math.h>
using namespace std;

int deciToBinary(int n){
int binaryNo = 0;
int i = 0;
    while(n>0){
        int bit = n % 2;
        binaryNo = bit*pow(10,i++) + binaryNo;
        n = n/2;
    }
    return binaryNo;

}
int main()
{
    int deci;
    cout<<"Enter a Number in Decimal to convert in Binary: "<<endl;
    cin>>deci;
    cout<<deciToBinary(deci)<<endl;
}
