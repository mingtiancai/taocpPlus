#include <iostream>

#include "../test/test.h"
#include "../volume1/gcd.h"

using namespace std;

int main(int argc, char** argv) {
	cout << "hello world!" << endl;
	Test t;

	cout << t.getName() << endl;

	int m = 1;
	int n = 22;

	cout << gcd<int>(m, n) << endl;

	return 0;
}
