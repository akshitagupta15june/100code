#include <iostream>
#include <cmath>
using namespace std;

void compute(int a, int b, int c, int x) {
    int f;
    f = (a * pow(x, 2)) + (b * x) + c;
    cout << f << endl;
}
int main(int argc, char **argv) {
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    compute(a, b, c, x);
    return 0;
}
