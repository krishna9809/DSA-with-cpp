// Pair Sum (one array)

#include<iostream>
#include<vector>
using namespace std;

void pairSum(vector<int> arr, int sum){
    for(int i = 0; i < arr.size(); i++){
        for(int j = i+1;j<arr.size();j++){
            if(arr[i] + arr[j] == sum){
                cout<<"The Pair Found "<<arr[i]<<" and "<<arr[j]<<endl;
            }
        }
    }
}

int main()
{
    int size;
    cout << "Enter the Size of 1st Array: " << endl;
    cin >> size;
    vector<int> arr(size);

    cout << "Enter the Elements: " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int sum;
    cout<<"Enter the Sum:"<<endl;
    cin>>sum;
    pairSum(arr,sum);
}