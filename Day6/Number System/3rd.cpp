// Binary To Decimal Conversion

#include<iostream>
#include<math.h>
using namespace std;

int binaryToDecimal(int n){

    int sum = 0;
    int i = 0;

    while(n>0){
        int rem = n%10;
        sum = sum + rem*pow(2,i++);
        n = n/10;
    }
    return sum;
}
int main()
{
    int binary;
    cout<<"Enter a Number in Binary to convert it in Decimal: "<<endl;
    cin>>binary;
    cout<<binaryToDecimal(binary)<<endl;
    return 0;
}