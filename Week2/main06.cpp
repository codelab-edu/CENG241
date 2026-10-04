#include <iostream>
using namespace std;

template <class T>
T sum(T x, T y) {
    return x + y;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << sum(x, y) << endl;

    double a, b;
    cin >> a >> b;
    cout << sum(a, b) << endl;

    return 0;
}