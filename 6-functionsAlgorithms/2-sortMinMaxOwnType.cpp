#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath> // dla funkcji std::sqrt

using namespace std;

class Point {
public:
    int x, y;

    Point(int x, int y) : x(x), y(y) {}

    void display() const {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }

    // Funkcja do obliczania odległości od początku układu współrzędnych
    double distance() const {
        return std::sqrt(x * x + y * y);
    }
};

// Komparator do sortowania punktów według odległości od początku układu współrzędnych
bool comparePoints(const Point &p1, const Point &p2) {
    return p1.distance() < p2.distance();
}

int main() {
    vector<Point> points = {
            Point(3, 4),
            Point(1, 1),
            Point(4, 5),
            Point(1, 7),
            Point(5, 1),
            Point(9, 2),
            Point(2, 6),
            Point(5, 5)
    };

    // Sortowanie punktów według odległości od początku układu współrzędnych
    sort(points.begin(), points.end(), comparePoints);

    cout << "Sorted points: " << endl;
    for (const Point &p: points) {
        p.display();
    }

    // Znalezienie punktu minimalnego i maksymalnego według odległości od początku układu współrzędnych
    Point minPoint = *min_element(points.begin(), points.end(), comparePoints);
    Point maxPoint = *max_element(points.begin(), points.end(), comparePoints);

    cout << "Min point: ";
    minPoint.display();
    cout << "Max point: ";
    maxPoint.display();

    return 0;
}
