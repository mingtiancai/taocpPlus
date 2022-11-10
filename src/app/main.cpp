#include <iostream>

#include "../test/test.h"
#include "../volume1/gcd.h"

using namespace std;

int main(int argc, char** argv) {
	cout << "hello world!" << endl;
	Test t;

	cout << t.getName() << endl;

	int m =	11;
	int n =	2;

	cout << gcd<int>(m,n) <<endl;

	return 0;
}
