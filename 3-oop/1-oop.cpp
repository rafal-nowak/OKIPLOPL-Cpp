#include <iostream>

using namespace std;

class Point {
public:
    int x, y;

    Point(int x, int y) : x(x), y(y) {}

    void display() {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(10, 20);
    p1.display();

    return 0;
}
