#include <iostream>

using namespace std;

int main()
{
	int i, n;
	while(true)
	{
		i++;
		cin >> n;
		if(n == 0) break;
		cout << "Case " << i << ": " << n << endl;
	}
	return 0;
}
