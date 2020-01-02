// TREEBINARY.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
class Person {
private:
	int age;
public:
	void setage(int iage) {
		age = iage;
	}
	void showage() {
		cout << age;
	}
};
class Student :public Person {
public:
	void showage() {
		cout << 20;
	}
};
int main()
{
	
}

