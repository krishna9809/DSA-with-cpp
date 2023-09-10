// Find Missing Element in AN array

#include <iostream>
#include <vector>
using namespace std;

int missElement(vector<int> arr)
{

    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {

        if (arr[mid] == mid + 1)
        {
            s = mid + 1;
        }
        else
        {
            ans = mid + 1;
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 6, 7, 8, 9};

    int missingElement = missElement(arr);

    cout << missingElement << endl;
}