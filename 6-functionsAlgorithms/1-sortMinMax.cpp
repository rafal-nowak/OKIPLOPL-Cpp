#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {3, 1, 4, 1, 5, 9, 2, 6, 5};

    sort(vec.begin(), vec.end());
    cout << "Sorted vector: ";
    for (int v: vec) {
        cout << v << " ";
    }
    cout << endl;

    int a = 10, b = 20;
    cout << "Min: " << min(a, b) << endl;
    cout << "Max: " << max(a, b) << endl;

    return 0;
}
