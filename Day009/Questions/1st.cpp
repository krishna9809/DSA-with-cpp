// Find Unique Element  //Every Element occurs twice except one

#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int> arr){
    int ans = 0;
    for(int i = 0; i< arr.size();i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int size;
    cout<<"Enter the Size of an Array: "<<endl;
    cin>>size;
    vector<int> arr(size);

    cout<<"Enter the Elements: "<<endl;
    for(int i = 0;i<arr.size();i++){
        cin>>arr[i];
    }
    
    int uniqueElement = findUnique(arr);
    cout<<"Unique Element is "<<uniqueElement<<endl;
    return 0;
}
