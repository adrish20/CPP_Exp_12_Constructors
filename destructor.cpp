//Adrish Purkayastha
//PRN: 23070123011
//ENTC A
//C++ program to implement destructor
#include <iostream>
using namespace std;
int count = 0;
class Student{
    public:
    Student(){
        count++;
        cout<<"No. of objects created = "<<count<<endl;
    }
    ~Student(){
        cout<<"No. of objects destroyed: "<<count<<endl;
        count--;
        }
};
int main(){
    Student s1,s2,s3;
}
/*
OUTPUT:
No. of objects created = 1
No. of objects created = 2
No. of objects created = 3
No. of objects destroyed: 3
No. of objects destroyed: 2
No. of objects destroyed: 1
*/