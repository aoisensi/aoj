#include <iostream>

using namespace std;

int main()
{
	int h, w, x, y;
	while(true) {
	cin >> h >> w;
	if(h == 0 && w == 0) break;
		for(y = 1; y <= h; y++) {
			if(y == 1 || y == h)
				for(x = 1; x <= w; x++)
					cout << '#';
			else
				for(x = 1; x <= w; x++)
					if(x == 1 || x == w)
						cout << '#';
					else
						cout << '.';
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}
