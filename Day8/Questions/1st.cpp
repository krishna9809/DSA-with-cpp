// Linear Search in Array

#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    for(int i = 0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
    
}

int main()
{
    int arr[5] = {1,3,4,2,5};
    int size = 5;
    int key;
    cout<<"Enter the Key to find in Array: "<<endl;
    cin>>key;
    bool result = linearSearch(arr,size,key);
    if(result){
        cout<<"Key is Found"<<endl;
    }
    else{
        cout<<"Key is Not Found"<<endl;
    }
} 
