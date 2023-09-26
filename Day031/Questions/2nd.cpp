// Reverse a String

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

void reverse_String(char name[]){
    int s = 0;
    int e = getLength(name) - 1;

    while(s<=e){
        swap(name[s++],name[e--]);
    }


}
int main()
{
    char name[100];
    cout<<"Enter String"<<endl;
    cin>>name;

    reverse_String(name);

    cout<<name<<endl;


    return 0;
}