//Adrish Purkayastha
//PRN: 23070123011
//ENTC A
//C++ program to learn about constructor
#include <iostream>
using namespace std;
class date{
    int d,m,y;
    public:
    date(){
        cout<<"Constructor called"<<endl;
        d = 4;
        m = 9;
        y = 2024;
    }
    void display(){
        cout<<"date: "<<d<<endl;
        cout<<"month: "<<m<<endl;
        cout<<"year: "<<y<<endl;
    }

};
int main(){
    date obj;
    obj.display();
}
/*
OUTPUT:
Constructor called
date: 4
month: 9
year: 2024
*/