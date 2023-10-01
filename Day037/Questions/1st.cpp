#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(char first, char second){
    return first>second;
}

int main()
{
    string s = "krishna is great okakfsw"; 
    sort(s.begin(), s.end(), cmp);

    cout<<s<<endl;
 
}
