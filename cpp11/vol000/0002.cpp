#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    while(cin >> a >> b)
        cout << (1 + (int)log10(a + b)) << endl;
    return 0;
}
