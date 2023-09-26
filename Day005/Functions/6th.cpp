// Find the sum from 1 to n
#include<iostream>
using namespace std;
int getSum(int n){
    int sum = 0;
    for(int i = 1;i<=n;i++){
        sum = sum + i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the Range:"<<endl;
    cin>>n;
    cout<<"Sum from 1 to "<<n<<" is "<<getSum(n)<<endl;

}