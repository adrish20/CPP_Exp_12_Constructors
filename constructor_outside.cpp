#include <iostream>
using namespace std;
class Student {
public:
    int rno, fee;
    string name;
    Student();
    void display();
};
Student::Student() {
    cout << "Enter the roll no.: ";
    cin >> rno;
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the fees: ";
    cin >> fee;
}
void Student::display() {
    cout << "Roll no: " << rno << endl;
    cout << "Name: " << name << endl;
    cout << "Fees: " << fee << endl;
}
int main() {
    Student s1;
    s1.display();
    return 0;
}
