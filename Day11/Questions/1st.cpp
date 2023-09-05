// Find Triplet for given sum

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{10,20,30,40,4,5,3,5,3,22,7,13,12,3,4};
    int sum;
    cout<<"Enter the Sum: "<<endl;
    cin>>sum;
    for(int i = 0; i <arr.size();i++){
        for(int j = i + 1; j < arr.size(); j++){
            for(int k = j + 1; k < arr.size(); k++){
                if(arr[i] + arr[j] + arr[k] == sum){
                      cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" Triplet sum = "<<sum<<endl;
                }         
                   }
        }
    }
}