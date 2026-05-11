#include <iostream>
#include <vector>
using namespace std;

struct Student {
    string name;
    int marks;
};

vector<Student> students;

void addStudent() {
    Student s;
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter marks: ";
    cin >> s.marks;

    students.push_back(s);
}

void displayStudents() {
    for (int i = 0; i < students.size(); i++) {
        cout << "Name: " << students[i].name 
             << ", Marks: " << students[i].marks << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "\n1. Add Student\n2. Display Students\n3. Exit\n";
        cin >> choice;

        if (choice == 1) addStudent();
        else if (choice == 2) displayStudents();

    } while (choice != 3);

    return 0;
}