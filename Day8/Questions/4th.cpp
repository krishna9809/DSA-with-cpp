// Minimum No. in an Array

#include<iostream>
using namespace std;

int minInArray(int arr[],int size){
    int min = INT8_MAX;

    for(int i = 0; i < size;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[10] = {1,3,4,10,-4,5,6,71,8,4};

    int size = 10;
    cout<<minInArray(arr,size)<<endl;

}