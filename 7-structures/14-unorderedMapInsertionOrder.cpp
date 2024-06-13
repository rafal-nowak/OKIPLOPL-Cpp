#include <iostream>
#include <unordered_map>
#include <list>

int main() {
    std::unordered_map<int, std::string> myMap;
    std::list<int> insertionOrder;

    // Dodawanie elementów do mapy
    myMap[3] = "Three";
    insertionOrder.push_back(3);
    myMap[1] = "One";
    insertionOrder.push_back(1);
    myMap[2] = "Two";
    insertionOrder.push_back(2);

    // Iteracja przez elementy w kolejności dodawania
    std::cout << "Elementy w kolejności dodawania:" << std::endl;
    for (int key: insertionOrder) {
        std::cout << "Klucz: " << key << ", Wartość: " << myMap[key] << std::endl;
    }

    return 0;
}
