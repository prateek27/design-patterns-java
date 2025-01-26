#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Professor class
class Professor {
private:
    string name;

public:
    // Constructor
    Professor(string name) {
        this->name = name;
    }

    // Getter for name
    string getName() {
        return name;
    }
};

// Department class (Aggregation relationship)
class Department {
private:
    string name;
    vector<Professor> professors;

public:
    // Constructor
    Department(string name, vector<Professor> professors) {
        this->name = name;
        this->professors = professors;
    }

    // Method to show professors
    void showProfessors() {
        cout << "Department: " << name << endl;
        for (auto& prof : professors) {
            cout << prof.getName() << endl;
        }
    }
};

int main() {
    // Creating professors
    Professor prof1("Dr. Jones");
    Professor prof2("Dr. Brown");

    // Creating a list of professors (vector)
    vector<Professor> professors;
    professors.push_back(prof1);
    professors.push_back(prof2);

    // Creating department
    Department department("Computer Science", professors);

    // Aggregation relationship: department has professors, but professors exist independently
    department.showProfessors();
    // Output:
    // Department: Computer Science
    // Dr. Jones
    // Dr. Brown

    return 0;
}