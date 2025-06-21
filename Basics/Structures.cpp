//This code defines a structure to store details of three students and allows input and output of their information.
// It uses a struct to encapsulate the properties of a student, such as name, roll number, and marks.
// The program prompts the user to enter the details for three students and then displays those details.

#include<iostream>
using namespace std;
int main(){
    
    struct student {
        string name;
        int roll_no;
        float marks;
    }s1, s2, s3;

    // Input details for student 1

    cout << "Enter the name of student 1: ";
    cin >> s1.name;
    cout << "Enter the roll number of student 1: ";
    cin >> s1.roll_no;
    cout << "Enter the marks of student 1: ";
    cin >> s1.marks;

    // Input details for student 2

    cout << "Enter the name of student 2: ";
    cin >> s2.name;         
    cout << "Enter the roll number of student 2: ";
    cin >> s2.roll_no;
    cout << "Enter the marks of student 2: ";
    cin >> s2.marks;

    // Input details for student 3

    cout << "Enter the name of student 3: ";
    cin >> s3.name;
    cout << "Enter the roll number of student 3: ";
    cin >> s3.roll_no;
    cout << "Enter the marks of student 3: ";
    cin >> s3.marks;

    // Displaying the details of all students

    cout << "\nDetails of Student 1:\n";
    cout << "Name: " << s1.name << endl;
    cout << "Roll No: " << s1.roll_no << endl;
    cout << "Marks: " << s1.marks << endl;
    cout << "\nDetails of Student 2:\n";
    cout << "Name: " << s2.name << endl;
    cout << "Roll No: " << s2.roll_no << endl;
    cout << "Marks: " << s2.marks << endl;
    cout << "\nDetails of Student 3:\n";
    cout << "Name: " << s3.name << endl;
    cout << "Roll No: " << s3.roll_no << endl;
    cout << "Marks: " << s3.marks << endl;

    // Output:
    // Enter the name of student 1: Alice
    // Enter the roll number of student 1: 101
    // Enter the marks of student 1: 85.5
    // Enter the name of student 2: Bob
    // Enter the roll number of student 2: 102
    // Enter the marks of student 2: 90.0
    // Enter the name of student 3: Charlie
    // Enter the roll number of student 3: 103
    // Enter the marks of student 3: 78.0

    // Details of Student 1:
    // Name: Alice
    // Roll No: 101
    // Marks: 85.5
    
    // Details of Student 2:
    // Name: Bob
    // Roll No: 102
    // Marks: 90.0
    
    // Details of Student 3:
    // Name: Charlie
    // Roll No: 103
    // Marks: 78.0

    return 0;

}