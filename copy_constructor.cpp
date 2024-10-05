//Adrish Purkayastha
//PRN: 23070123011
//ENTC A
//C++ program to copy a constructor attributes
#include <iostream>
using namespace std;
class Wall{
    double length;
    double height;
    public:
    Wall(double len, double hgt){
        length = len;
        height = hgt;
    }
    Wall(Wall &obj){
        length = obj.length;
        height = obj.height;
    }
    double calculateArea(){
        return length*height;
    }
};
int main(){
    Wall wall1(10.3,5.6);
    Wall wall2 = wall1;
    cout<<"Area of wall1 : "<<wall1.calculateArea()<<endl;
    cout<<"Area of wall2: "<<wall2.calculateArea()<<endl;
}
/*
OUTPUT:
Area of wall1 : 57.68
Area of wall2: 57.68
*/