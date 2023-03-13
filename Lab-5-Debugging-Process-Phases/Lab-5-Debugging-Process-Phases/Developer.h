#pragma once
#include <iostream>
using namespace std;
class Developer {
public:
	int* age;
public:
	Developer(int age);
	Developer(Developer& rhs);
	int getAge();
	void setAge(int age);
	~Developer();
};
