#include <iostream>

using namespace std;

int main() {
    // Using std::cin and std::cout
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cout << "Enter integer value: " << endl;
    cin >> n;
    cout << "You entered: " << n << endl;

    int a, b, c;
    cout << "Enter three integer values separated by spaces: " << endl;
    cin >> a >> b >> c;
    cout << "You entered: " << a << " " << b << " " << c << endl;

    return 0;

}

