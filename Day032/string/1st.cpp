
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


int main()
{
    string name = "krishna";
    
    cout<<name.length()<<endl;
    
    cout<<name.empty()<<endl;
    
    name.push_back('S');
    cout<<name<<endl;

    name.pop_back();
    cout<<name<<endl;
     
    cout<<name.substr(1,3)<<endl;

    cout<<name.compare("krishna")<<endl;

    name.replace(1,5,"krish");
    cout<<name<<endl;

    name.erase(1,5);
    cout<<name<<endl;




 }