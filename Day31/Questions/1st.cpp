// Length of string

#include<iostream>
using namespace std;

int getLength(char name[]){
    int length = 0;
    int i = 0;
    while(name[i] != '\0'){
        length++;
        i++;
    }
    return length;
}
int main()
{
    char name[100];
    cout<<"Enter String"<<endl;
    cin>>name;

    cout<<"Lenght of your name is "<<getLength(name)<<endl;


    return 0;
}