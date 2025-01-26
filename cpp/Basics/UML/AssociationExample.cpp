#include <iostream>
#include <string>

using namespace std;

// Student class
class Student {
private:
    string name;

public:
    // Constructor
    Student(string name) {
        this->name = name;
    }

    // Getter for name
    string getName() {
        return name;
    }
};

// Teacher class
class Teacher {
private:
    string name;

public:
    // Constructor
    Teacher(string name) {
        this->name = name;
    }

    // Getter for name
    string getName() {
        return name;
    }

    // Method to teach a student
    void teach(Student& student) {
        cout << name << " is teaching " << student.getName() << endl;
    }
};

int main() {
    // Creating a teacher and a student
    Teacher teacher("Miss Neha");
    Student student("Rahul");

    // Association between teacher and student
    teacher.teach(student); // Output: Miss Neha is teaching Rahul

    return 0;
}