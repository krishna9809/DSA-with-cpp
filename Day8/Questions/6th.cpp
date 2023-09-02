// Reverse an Array with Swap Function

#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[8] = {1,2,3,4,5,6,7,8};
    int size = 8;
    
    int start = 0;
    int end = size -1;

    while(start < end){
        swap(arr[start++],arr[end--]);
    }

    printArray(arr,size);
}