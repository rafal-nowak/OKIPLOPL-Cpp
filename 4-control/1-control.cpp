#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Instrukcja warunkowa if-else
    int number = 42;
    if (number > 0) {
        cout << "Number is positive" << endl;
    } else if (number < 0) {
        cout << "Number is negative" << endl;
    } else {
        cout << "Number is zero" << endl;
    }

    // Operator warunkowy (ternary operator)
    int age = 20;
    string status = (age >= 18) ? "Adult" : "Minor";
    cout << "Status: " << status << endl;

    // Operatory logiczne
    bool is_student = true;
    bool has_discount = false;
    if (is_student && !has_discount) {
        cout << "Student without discount" << endl;
    }

    // Pętla for
    cout << "For loop: ";
    for (int i = 0; i < 5; ++i) {
        cout << i << " ";
    }
    cout << endl;

    // Pętla while
    cout << "While loop: ";
    int count = 0;
    while (count < 5) {
        cout << count << " ";
        ++count;
    }
    cout << endl;

    // Pętla do-while
    cout << "Do-while loop: ";
    int value = 0;
    do {
        cout << value << " ";
        ++value;
    } while (value < 5);
    cout << endl;

    // Pętla range-based for (dla wektora)
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Range-based for loop: ";
    for (int v: vec) {
        cout << v << " ";
    }
    cout << endl;

    // Instrukcja switch-case
    char grade = 'B';
    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Good job!" << endl;
            break;
        case 'C':
            cout << "Well done" << endl;
            break;
        case 'D':
            cout << "You passed" << endl;
            break;
        case 'F':
            cout << "Better try again" << endl;
            break;
        default:
            cout << "Invalid grade" << endl;
    }

    return 0;
}
