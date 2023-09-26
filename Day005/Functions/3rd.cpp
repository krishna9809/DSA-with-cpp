// Find max of 3 numbers

#include<iostream>
using namespace std;
int maxi(int a, int b,int c){
    if((a>b)&&(a>c)){
        return a;
    } 
    else if((b>a)&&(b>c)){
        return b;
    }

return c;
}
int main(){
    int a,b,c;
    cout<<"Enter 3 no. for find max number:"<<endl;
    cin>>a>>b>>c;
    int max = maxi(a,b,c);
    cout<<"Maximum from these three no. is "<<max<<endl;
}