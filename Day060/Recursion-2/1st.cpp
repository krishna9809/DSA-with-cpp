// Climb Stairs

#include<iostream>
using namespace std;
    int climbStairs(int n) {
        if(n==0){
            return 1;
        }

        if(n==1){
            return 1;
        }

        if(n==2){
            return 2;
        }

        return climbStairs(n-1) +  climbStairs(n-2) ;

    }
int main()
{
    int n;
    cout<<"Enter the Total no. of Stairs: "<<endl;
    cin>>n;
    cout<<climbStairs(n)<<endl;

}