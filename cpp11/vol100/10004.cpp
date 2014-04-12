#include <iostream>

using namespace std;

void check(int* a, int* b)
{
	if(*a > *b)
	{
		*a = *a ^ *b;
		*b = *a ^ *b;
		*a = *a ^ *b;
	}
}

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	check(&a, &b);
	check(&b, &c);
	check(&a, &b);
	cout << a << ' ' << b << ' ' << c << endl;
	return 0;
}
