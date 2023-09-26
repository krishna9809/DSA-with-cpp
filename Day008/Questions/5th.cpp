// Extreme Print in Array

#include<iostream>
using namespace std;
int main()
{
    int arr[8] = {1,2,3,4,5,6,7,8};
    int size = 8;
    
    int start = 0;
    int end = size -1;

    while(start < end){
        cout<<arr[start++]<<" ";
        cout<<arr[end--]<<" ";
    }
}