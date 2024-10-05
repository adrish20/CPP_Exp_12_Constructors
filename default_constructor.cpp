//Adrish Purkayastha
//PRN: 23070123011
//ENTC A
//C++ program to implement default constructor.
#include <iostream>
using namespace std;
class Construct{
    public:
    int a,b,c;
    Construct(){
        a = 10, b = 20, c = a+b;
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"c = "<<c<<endl;
    }
};
int main(){
    Construct();
}
/*
OUTPUT:
a = 10
b = 20
c = 30
*/