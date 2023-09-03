// Union of 2 Arrays (No Duplicates)

#include <iostream>
#include <vector>
using namespace std;

void unionOfArray(vector<int> arr1, vector<int> arr2)
{

    vector<int> result;

    for (int i = 0; i < arr1.size(); i++)
    {
        result.push_back(arr1[i]);
    }

    for (int i = 0; i < arr2.size(); i++)
    {
        result.push_back(arr2[i]);
    }

    cout << "The Union of 2 Arrays: " << endl;

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}

int main()
{
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

    unionOfArray(arr1, arr2);
}