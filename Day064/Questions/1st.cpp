// Binary Search using Recursion

#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &v,int s,int e,int key){
    int mid = s + (e-s)/2;

    if(s>e){
        return -1;
    }

    if(v[mid] == key){
        return mid;
    }

    if(v[mid]<key){
        return binarySearch(v,mid+1,e,key);
    }

    if(v[mid]>key){
        return binarySearch(v,s,mid-1,key);
    }
return -1;

}

int main()
{
    vector<int> v{10,20,30,50,60,65,80};

    int key = 70;
    int n = v.size();
    int s = 0;
    int e = n -1;
    int ans = binarySearch(v,s,e,key);
    if(ans == -1){
        cout<<"NOT FOUND"<<endl;
    }
    else{
    cout<<"Answer is: "<<ans<<endl;
    }
}