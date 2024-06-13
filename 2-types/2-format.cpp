#include <iostream>
#include <iomanip> // Dla manipulacji wejściem/wyjściem
#include <sstream> // Dla strumieni stringowych

using namespace std;

int main() {
    // Przyjmowanie wartości całkowitych
    int decimalInt;
    cout << "Podaj liczbę całkowitą w systemie dziesiętnym: ";
    cin >> decimalInt;
    cout << "Podano liczbę: " << decimalInt << " (dziesiętnie)" << endl;
    cout << "Liczba w systemie szesnastkowym: " << hex << decimalInt << dec << endl;

    // Przyjmowanie wartości zmiennoprzecinkowych
    float floatValue;
    cout << "Podaj liczbę zmiennoprzecinkową: ";
    cin >> floatValue;
    cout << "Liczba zmiennoprzecinkowa (zwykły format): " << floatValue << endl;
    cout << "Liczba zmiennoprzecinkowa (naukowy format): " << scientific << floatValue << defaultfloat << endl;
    cout << "Liczba zmiennoprzecinkowa (stały format, 2 miejsca po przecinku): " << fixed << setprecision(2)
         << floatValue << defaultfloat << endl;

    // Przyjmowanie wartości w różnych systemach liczbowych
    string hexInput;
    cout << "Podaj liczbę całkowitą w systemie szesnastkowym (np. 1A): ";
    cin >> hexInput;
    stringstream ss;
    ss << hex << hexInput;
    int hexInt;
    ss >> hexInt;
    cout << "Podano liczbę: " << hexInput << " (szesnastkowo) = " << hexInt << " (dziesiętnie)" << endl;

    return 0;
}
