#include<iostream>
using namespace std;

void inc(int arr[], int size){
    arr[0] = arr[0] + 1;
    cout<<arr[0]<<endl;
 }

void printArray(int arr[], int size){
    for(int i = 0;i<size; i++){
        cout<<arr[i]<<endl;
    }
}
int main()
{

    int arr[2] = {5,6};
    int size =  2;
    inc(arr, size);

    cout<<arr[0]<<endl;
    return 0;
}