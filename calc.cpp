#include <iostream>
using namespace std;

int add(int x, int y) {
	return (x + y);
}

int sub(int x, int y) {
	return 0;
}

int div(int x, int y) {
	return (x / y);
}

int mul(int x, int y) {
	return 0;
}

int main()
{
	int a1, a2, a3, a4;
	a1 = add(6, 2);
	a1 = sub(6, 2);
	a1 = div(6, 2);
	a1 = mul(6, 2);
	return 0;
}
