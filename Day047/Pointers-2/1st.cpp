#include<iostream>
using namespace std;
int main()
{
    int p = 5;
    int* ptr = &p;

    cout<<p<<endl; // 5;
    cout<<&p<<endl; // add. of p
    cout<<*ptr<<endl; // 5;
    cout<<*ptr + 1<<endl; // 6
    cout<<&ptr<<endl; 

    // Pointers with Array

    int arr[10] = {1,2,3,4,5,6,7,7,8,9};

    cout<<arr<<endl;
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;

    cout<<*arr<<endl;
    cout<<*arr+4<<endl;


}   