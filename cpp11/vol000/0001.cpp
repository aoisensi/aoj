#include <iostream>
#include <array>
#include <algorithm>
 
using namespace std;
 
int main() {
    array<int, 10> input;
    for(auto& i : input)
        cin >> i;
    sort(input.begin(), input.end(), greater<int>());
        cout << input[0] << endl
             << input[1] << endl
             << input[2] << endl;;
    return 0;
}
