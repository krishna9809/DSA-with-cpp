// Find the sum of even no from 1 to n

#include<iostream>
using namespace std;
int getEvenSum(int n){
    int sum = 0;
    for(int i = 2;i<=n;i = i + 2){
        sum = sum + i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the Range:"<<endl;
    cin>>n;
    cout<<"Sum from 1 to "<<n<<" is "<<getEvenSum(n)<<endl;

}