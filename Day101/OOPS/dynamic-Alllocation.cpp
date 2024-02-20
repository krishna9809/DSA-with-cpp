#include<iostream>
using namespace std;

class animal{
    public:
    int age;
    string name;

    void sleep(){
        cout<<"Sleeping"<<endl;
    }

    void eat(){
        cout<<"Eating"<<endl;
    }
};

int main(){
    animal* A1 = new animal;

    (*A1).age = 19;
    (*A1).name = "Lion";

    // Alternate

    A1->age = 15;
    A1->name = "Lioness";

    A1->eat();
    A1->sleep();

    cout<<A1->age<<endl;
}