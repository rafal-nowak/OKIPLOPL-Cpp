#include <iostream>
#include <queue>
#include <vector>

struct Task {
    int priority;
    std::string description;

    // Operator porównania, aby kolejka priorytetowa mogła uporządkować zadania
    bool operator<(const Task &other) const {
        // Priorytety są porównywane od największego do najmniejszego
        return priority < other.priority;
    }
};

int main() {
    std::priority_queue<Task> taskQueue;

    // Dodanie zadań do kolejki priorytetowej
    taskQueue.push({3, "Low priority task"});
    taskQueue.push({1, "High priority task"});
    taskQueue.push({2, "Medium priority task"});
    taskQueue.push({4, "Very low priority task"});
    taskQueue.push({0, "Very high priority task"});

    // Sprawdzenie rozmiaru kolejki
    std::cout << "Queue size: " << taskQueue.size() << std::endl;

    // Dostęp do elementu o najwyższym priorytecie
    if (!taskQueue.empty()) {
        const Task &topTask = taskQueue.top();
        std::cout << "Top task: " << topTask.description << " with priority " << topTask.priority << std::endl;
    }

    // Przetwarzanie zadań w kolejności priorytetu
    std::cout << "Processing tasks in priority order:" << std::endl;
    while (!taskQueue.empty()) {
        Task currentTask = taskQueue.top(); // Pobranie zadania o najwyższym priorytecie
        taskQueue.pop(); // Usunięcie zadania z kolejki
        std::cout << "Processing task: " << currentTask.description << " with priority " << currentTask.priority
                  << std::endl;
    }

    // Sprawdzenie, czy kolejka jest pusta
    if (taskQueue.empty()) {
        std::cout << "The priority queue is now empty." << std::endl;
    }

    // Dodanie nowych zadań do kolejki priorytetowej
    taskQueue.push({5, "New low priority task"});
    taskQueue.push({-1, "New high priority task"});
    std::cout << "After adding new tasks, the tasks in the queue are:" << std::endl;
    std::priority_queue<Task> tempQueue = taskQueue; // Skopiowanie kolejki do tymczasowej kolejki w celu iteracji
    while (!tempQueue.empty()) {
        Task currentTask = tempQueue.top();
        tempQueue.pop();
        std::cout << "Task: " << currentTask.description << " with priority " << currentTask.priority << std::endl;
    }

    return 0;
}
