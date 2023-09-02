// Maximum No. in an Array

#include<iostream>
using namespace std;

int maxInArray(int arr[],int size){
    int max = INT8_MIN;

    for(int i = 0; i < size;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[10] = {1,3,4,10,-4,5,6,71,8,4};

    int size = 10;
    cout<<maxInArray(arr,size)<<endl;

}