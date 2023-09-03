// Intersection of 2 Arrays

#include<iostream>
#include<vector>
using namespace std;

void intersection(vector<int> arr1, vector<int> arr2){

    vector<int> result;

    for(int i = 0 ; i < arr1.size();i++){
        for(int j = 0;j < arr2.size(); j++){
            if(arr1[i]==arr2[j]){
                // mark
                arr2[j] = INT16_MIN;
                result.push_back(arr1[i]);
            }
        }
    }

    cout << "The Intersection of 2 Arrays: " << endl;

    for (auto i: result)
    {
        cout << result[i] << " ";
    }
    cout<<endl;

}

int main(){

    int size;
    cout << "Enter the Size of 1st Array: " << endl;
    cin >> size;
    vector<int> arr1(size);

    cout << "Enter the Elements: " << endl;
    for (int i = 0; i < arr1.size(); i++)
    {
        cin >> arr1[i];
    }

    int size1;
    cout << "Enter the Size of 2nd Array: " << endl;
    cin >> size;
    vector<int> arr2(size);

    cout << "Enter the Elements: " << endl;
    for (int i = 0; i < arr2.size(); i++)
    {
        cin >> arr2[i];
    }

    intersection(arr1,arr2);

}