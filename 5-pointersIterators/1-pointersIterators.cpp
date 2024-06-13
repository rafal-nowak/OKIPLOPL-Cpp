#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a = 10;
    int *p = &a;
    cout << "Value of a: " << a << endl;
    cout << "Value of *p: " << *p << endl;

    vector<int> vec = {1, 2, 3, 4, 5};

    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
