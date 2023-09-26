#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <vector <int> > vec;

    vector<int> a{1,2,3};
    vector<int> b{3,3,5,4,5,6};
    vector<int> c{1,4,3};

    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);

    for(int i = 0 ; i< vec.size();i++){
        for(int j = 0; j< vec[i].size(); j++){
            cout<< vec[i][j]<<" ";
        }
        cout<<endl;
    }


    vector<vector<int> > arr(5 , vector<int>(5,-8));


    for(int i = 0 ; i< arr.size();i++){
        for(int j = 0; j< arr[i].size(); j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }

    
}