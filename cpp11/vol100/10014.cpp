#include <iostream>

using namespace std;

int main()
{
	int h, w, x, y;
	while(true) {
	cin >> h >> w;
	if(h == 0 && w == 0) break;
		for(y = 1; y <= h; y++) {
			for(x = 1; x <= w; x++)
				if((x + y) % 2)
					cout << '.';
				else
					cout << '#';
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}
