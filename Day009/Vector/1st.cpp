#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> brr;

    // Method to find size of vector but it is dedend upon complier  

    int brrr = (sizeof(brr)/sizeof(int));
    cout<<brrr<<endl;

    // initilising the vector and with same value 
    vector<int> arr(5,700);
    for(int i = 0;i < 5;i++){
        cout<<arr[i]<<" ";
    }

    // push  element in vector at the end

    arr.push_back(5);
    cout<<arr[5]<<endl;

    // pop element in vector at the end

    arr.pop_back();
     for(int i = 0;i < 6;i++){
        cout<<arr[i]<<endl;
    }
    
    // Check vector is empty or not

    if(arr.empty()){
        cout<<"Vector is Empty"<<endl;
    }
    else{
        cout<<"Vector is not Empty"<<endl;
    }

    
    return 0;

}