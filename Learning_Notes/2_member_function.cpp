// explain about member function in C++ with example code with detailed explanation
#include <iostream>
using namespace std;
// member function is a function that is defined inside a class and can access the data members of the class.
// member function can be defined inside the class or outside the class using the scope resolution operator (::).
// member function can be called using the object of the class.
// member function can be used to set the values of data members and to get the values of data members. 
class student {
private:
    const char* name=nullptr; // data member to store the name of the student
    int roll_no;
public:
    void setName(const char* name) { // member function defined inside the class
        this->name = name; // this pointer is used to access the data member of the class
    }
    void setRoll_no(int newRollNo); // member function declared inside the class and defined outside the class
    void display() { // member function defined inside the class
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
    }
};

void student::setRoll_no(int newRollNo) { // member function defined outside the class using scope resolution operator
    roll_no = newRollNo; // accessing the data member of the class
}

int main() {
    student s1; // creating an object of the class student
    s1.setName("John"); // calling the member function to set the name of the student
    s1.setRoll_no(101); // calling the member function to set the roll number of the student
    s1.display(); // calling the member function to display the details of the student
    return 0;
}
/*
In this code, we have defined a class named 'student' with two data members: 'name' and 'roll_no'. We have also defined three member functions: 'setName', 'setRoll_no', and 'display'.
The 'setName' function is defined inside the class and is used to set the name of the student. It takes a character pointer as an argument and assigns it to the 'name' data member using the 'this' pointer.
The 'setRoll_no' function is declared inside the class but defined outside the class using the scope resolution operator (::). It takes an integer as an argument and assigns it to the 'roll_no' data member.
The 'display' function is defined inside the class and is used to display the details of the student. It prints the name and roll number of the student to the console.
In the 'main' function, we create an object of the 'student' class named 's1'. We then call the member functions to set the name and roll number of the student and finally call the 'display' function to show the details of the student on the console.
*/  