#include <iostream>
#include <string>

using namespace std;

int main() {
    // Inicjalizacja i dodawanie do łańcucha znaków
    string greeting = "Hello";
    string name = "Alice";
    string message = greeting + ", " + name + "!"; // Konkatenacja łańcuchów
    cout << "Message: " << message << endl;

    // Długość łańcucha
    cout << "Length of message: " << message.length() << endl;

    // Dostęp do poszczególnych znaków
    cout << "First character: " << message[0] << endl;

    // Znajdowanie podłańcucha
    size_t pos = message.find("Alice");
    if (pos != string::npos) {
        cout << "'Alice' found at position: " << pos << endl;
    } else {
        cout << "'Alice' not found" << endl;
    }

    // Zamienianie podłańcucha
    message.replace(pos, 5, "Bob");
    cout << "After replacement: " << message << endl;

    // Usuwanie znaków
    message.erase(message.find("Bob"), 3); // Usunięcie "Bob"
    cout << "After erasing 'Bob': " << message << endl;

    // Wstawianie podłańcucha
    message.insert(pos, "Charlie");
    cout << "After inserting 'Charlie': " << message << endl;

    // Podłańcuch (substring)
    string sub_message = message.substr(7, 7); // Wydobycie "Charlie"
    cout << "Substring: " << sub_message << endl;

    // Porównywanie łańcuchów
    string str1 = "Hello";
    string str2 = "World";
    if (str1 == str2) {
        cout << "str1 and str2 are equal" << endl;
    } else {
        cout << "str1 and str2 are not equal" << endl;
    }

    // Konwersja liczby do łańcucha i odwrotnie
    int number = 42;
    string number_str = to_string(number); // Liczba na łańcuch
    cout << "Number as string: " << number_str << endl;

    string another_number_str = "123";
    int another_number = stoi(another_number_str); // Łańcuch na liczbę
    cout << "String to number: " << another_number << endl;

    return 0;
}
