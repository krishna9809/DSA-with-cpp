//Find the First occurance of an Element

#include<iostream>
#include<vector>
using namespace std;

int firstOcc(vector<int> v,int key){
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(v[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(v[mid] < key){
            s = mid +1;
        }
        else if(v[mid] > key){
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    vector<int> v = {0,2,2,2,2,5,6,6,7,9};
    int key = 2;

    int firstOccurance = firstOcc(v,key);

    cout<<firstOccurance<<endl;
}