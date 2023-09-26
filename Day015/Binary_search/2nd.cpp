// binary search STL in vector
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v{2,5,6,6,8,9,10,33,55,67};
     
    
    

    if(binary_search(v.begin(),v.end(),67)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"key not found"<<endl;
    }
}