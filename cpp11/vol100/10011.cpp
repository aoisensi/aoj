#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int i, n;
	cin >> n;
	vector<int> a(n);
	for(; i < n; i++)
		cin >> a[i];
	reverse(a.begin(), a.end());
	i = 0;
	while(true) {
		cout << a[i];
		if((n - i) == 1) break;
		cout << ' ';
		i++;
	}
	cout << endl;
	return 0;
}
