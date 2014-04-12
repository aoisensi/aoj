#include <iostream>
#include <array>

using namespace std;

int main() {
	int i, n, m;
	array<int, 100> l;
	cin >> n;
	for(; i<n; i++)
		cin >> l[n];
	for(; i>0; i--)
		cout << l[i] << ' ';
	cout << l[0] << endl;
	return 0;
}
