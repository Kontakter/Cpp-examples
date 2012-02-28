// Compile at different platforms with dirrent compile keys to get different result
#include <cstdio>

int main() {
    double b[4] = {-2e9 + 1, 2e9 - 1,    2e9,   -2e9 + 2};
    double a[2] = {b[0] * b[1], b[2] * b[3]};
    printf("%20lf\n", a[0] - a[1]); //Comment this line to get surprise
    printf("%20lf\n", b[0] * b[1] - b[2] * b[3]);

    return 0;
}
