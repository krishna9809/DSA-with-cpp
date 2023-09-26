// binary search STL in Array
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

     
    int arr[10]= {2,5,6,6,8,9,10,33,55,67};
    int size = 10;
    int key = 67;
    

    if(binary_search(arr,arr + size,key)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"key not found"<<endl;
    }
}