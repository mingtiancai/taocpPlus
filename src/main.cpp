#include <iostream>

#include "test.h"
#include "t1.h"

using namespace std;

int main(int argc, char** argv) {
  cout << "hello world!" << endl;
  Test t;

  cout << t.getName() << endl;

  t1 t11;

  cout << t11.getName()<<endl;

  return 0;
}
