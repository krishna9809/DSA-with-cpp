#include<iostream>
using namespace std;

class animal{
    private:
    int count;
    string name;

    public:

    int getCount(){
        return this->count;
    }

    void setCount(int counter){
        this->count = counter;
    }


}