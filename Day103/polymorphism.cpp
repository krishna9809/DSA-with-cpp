#include<iostream>
using namespace std;

class math{
    public:
    int a;
    int b;

    int sum(int a,int b){
        return a+b;
    }

    int sum(int a, int b, int c){
        return a+b+c;
    }
};

int main(){
    math m1;

    int a = m1.sum(2,3);

    cout<<a<<endl;

    int b = m1.sum(3,4,5);

    cout<<b<<endl;

}