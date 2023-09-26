//write a function to display area of circle

#include<iostream>
using namespace std;
double areaOfCirlcle(int r){
    return ((22/7)*(r*r)); 
}
int main()
{
    int r;
    cout<<"Enter the Radius of Circle:"<<endl;
    cin>>r;
    cout<<"Area of Circle is "<<areaOfCirlcle(r)<<endl;
    return 0;
}