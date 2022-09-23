#include <iostream>
#include <string>

using namespace std;

class Student {
    private:
    string name;


    public:
    Student(string name1="unknown"):
    name(name1) {}


    void printName() {
        cout << name << endl;
    }
};

int main() {
    Student test_student("Rakesh"); 
    Student unknown_test_student;
    test_student.printName();
    unknown_test_student.printName();
}
