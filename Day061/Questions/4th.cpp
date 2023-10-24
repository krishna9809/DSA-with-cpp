// R is Presnt in String or Not

#include<iostream>
using namespace std;

void checkKey(string& str,int i,int n,char key){
    if(i >= n){
        return;
    }

    if(str[i] == key){
        cout<<"Founda at "<<i<<endl;
    }

    return checkKey(str,i+1,n,key);
}
int main()
{
    string str = "KrishnaSharma";
    int n = str.length();

    char key = 'r';
    int i = 0;

    checkKey(str,i,n,key);

    // cout<<"answer is : "<<ans <<endl;
}