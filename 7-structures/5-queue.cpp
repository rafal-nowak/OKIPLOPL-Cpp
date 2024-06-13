#include <iostream>
#include <queue>
#include <stdexcept> // dla wyjątków std::out_of_range

int main() {
    // Inicjalizacja kolejki
    std::queue<int> q;

    // Dodawanie elementów do kolejki
    q.push(1);
    q.push(2);
    q.push(3);
    std::cout << "After pushing elements 1, 2, 3, the front element is: " << q.front() << std::endl;

    // Sprawdzenie rozmiaru kolejki
    std::cout << "Current queue size: " << q.size() << std::endl;

    // Dostęp do elementu na początku i końcu kolejki
    if (!q.empty()) {
        std::cout << "Front element: " << q.front() << std::endl;
        std::cout << "Back element: " << q.back() << std::endl;
    }

    // Usunięcie elementów z kolejki
    std::cout << "Popping elements: ";
    while (!q.empty()) {
        std::cout << q.front() << " "; // Dostęp do elementu na początku kolejki
        q.pop(); // Usunięcie elementu z początku kolejki
    }
    std::cout << std::endl;

    // Sprawdzenie, czy kolejka jest pusta
    if (q.empty()) {
        std::cout << "The queue is now empty." << std::endl;
    }

    // Dodanie nowych elementów do kolejki
    q.push(10);
    q.push(20);
    q.push(30);
    std::cout << "After pushing elements 10, 20, 30, the queue elements are: ";
    std::queue<int> temp = q; // Skopiowanie kolejki do tymczasowej kolejki w celu iteracji
    while (!temp.empty()) {
        std::cout << temp.front() << " ";
        temp.pop();
    }
    std::cout << std::endl;

    return 0;
}
