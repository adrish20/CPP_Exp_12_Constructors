//Adrish Purkayastha
//PRN: 23070123011
//ENTC A
//C++ program to implement parameterised constructor
#include <iostream>
using namespace std;

class Pconstruct {
public:
    int area;
    int a, b;
    Pconstruct(int m, int n) {
        area = m * n;
    }
    void input() {
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
    }
    void display() {
        cout << "Area = " << area << endl;
    }
};
int main() {
    int a, b;
    Pconstruct obj(0, 0);
    obj.input();
    obj = Pconstruct(obj.a, obj.b);
    obj.display();

    return 0;
}
/*
OUTPUT:
Enter a: 2
Enter b: 3
Area = 6
*/
