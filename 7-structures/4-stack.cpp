#include <iostream>
#include <stack>
#include <stdexcept> // dla wyjątków std::out_of_range

int main() {
    // Inicjalizacja stosu
    std::stack<int> st;

    // Dodawanie elementów na stos
    st.push(1);
    st.push(2);
    st.push(3);
    std::cout << "After pushing elements 1, 2, 3, the top element is: " << st.top() << std::endl;

    // Sprawdzenie rozmiaru stosu
    std::cout << "Current stack size: " << st.size() << std::endl;

    // Dostęp do elementu na wierzchu stosu
    if (!st.empty()) {
        std::cout << "Element at the top: " << st.top() << std::endl;
    }

    // Usunięcie elementów ze stosu
    std::cout << "Popping elements: ";
    while (!st.empty()) {
        std::cout << st.top() << " "; // Dostęp do elementu na wierzchu stosu
        st.pop(); // Usunięcie elementu z wierzchu stosu
    }
    std::cout << std::endl;

    // Sprawdzenie, czy stos jest pusty
    if (st.empty()) {
        std::cout << "The stack is now empty." << std::endl;
    }

    // Dodanie nowych elementów do stosu
    st.push(10);
    st.push(20);
    st.push(30);
    std::cout << "After pushing elements 10, 20, 30, the stack elements are: ";
    std::stack<int> temp = st; // Skopiowanie stosu do tymczasowego stosu w celu iteracji
    while (!temp.empty()) {
        std::cout << temp.top() << " ";
        temp.pop();
    }
    std::cout << std::endl;

    return 0;
}
