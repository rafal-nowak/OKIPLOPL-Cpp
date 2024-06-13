#include <cstdio>

using namespace std;

int main() {
    // Using printf and scanf
    int n;
    printf("Enter integer value: \n");
    scanf("%d", &n);
    printf("You entered: %d\n", n);

    int a, b, c;
    printf("Enter three integer values separated by spaces: \n");
    scanf("%d %d %d", &a, &b, &c);
    printf("You entered: %d %d %d\n", a, b, c);

    return 0;
}

