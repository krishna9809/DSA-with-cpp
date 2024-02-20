#include<iostream>
using namespace std;

class animal{
    public:

    void eat(){
        cout<<"Eating"<<endl;
    }


// destructor

~animal(){
    cout<<"I am in Destructor"<<endl;
}


};

//

 

int main(){
    // animal A1;
    // A1.eat();
    
   animal* A2 = new animal;

   A2->eat();

   delete A2;



}