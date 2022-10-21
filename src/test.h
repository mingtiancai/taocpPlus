#pragma once

#include <string>

using std::string;

class Test {
public:
	Test();

	~Test();

	string getName();
private:
	string name;
};