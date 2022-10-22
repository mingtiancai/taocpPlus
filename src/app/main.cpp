#include <iostream>

#include "../test/test.h"

using namespace std;

int main(int argc, char** argv) {
	cout << "hello world!" << endl;
	Test t;

	cout << t.getName() << endl;

	return 0;
}
