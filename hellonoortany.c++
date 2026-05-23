#include <iostream>
using namespace std;
int main() {
    string name = "unknown";
    int age = 0;
    double gpa = 0.0;  
    char letter = 'a'; 
    bool Success = false;
    cout << "Enter your name: ";
    cin >>name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your GPA: ";
    cin >> gpa;
    cout << "Enter a letter: ";
    cin >> letter;
    cout << "Was it a success (1 for true, 0 for false): ";
    cin >> Success;
    cout << " Your Details" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Letter: " << letter << endl;
    cout << "Success: "
     << Success << endl;

    return 0;
}
